#include "MsgWindow.h"
#include "MenuWindow.h"
#include "LoginWindow.h"
#include "TestWindow.h"
#include "TrainWindow.h"
#include <QTimer>
#include <QMessageBox>

#include <windows.h>
#include <fstream>
#include <string>
#include <algorithm>

/*T9 data and structure*/
#define LETTER_SIZE 26
#define MAX_WORD 20

std::ifstream file;
typedef std::string elementType;
QString predictWords[MAX_WORD];
int predNum = 0;
QString inputWord = "";

//Tree node
struct node {
	bool endOfWord; //if it is the end of a word
	int prefix_count = 0;
	char number; //typing number of last letter in this node
	struct node* child[LETTER_SIZE];
};

typedef node *position;

//Trie Tree class
class Tree {
protected:
	position head;

public:

	Tree() {
		head = new node();
		head->prefix_count = 0;
		head->endOfWord = false;
	}

	~Tree() {
		DeleteNode(head);
	}

	//Insert the given words in the Trie
	void Insert(elementType word)
	{
		position p = head;
		p->prefix_count++;

		for (int i = 0; i<word.length(); i++)
		{
			int letter = (int)word[i] - (int)'A';
			if (p->child[letter] == NULL)
			{
				p->child[letter] = new node();
				p->child[letter]->number = NumberLetter(word[i]);
			}
			p = p->child[letter];
		}
		p->endOfWord = true;
	}

	void DeleteWord(elementType word)
	{
		node *n = head;
		int size;

		for (int i = 0; i<word.length(); i++)
		{
			size = (int)word[i] - (int)'A';
			if ((size > 25) || (size < 0)) continue;
			if (n->child[size] == NULL)
			{
				return;
			}
			n = n->child[size];
		}
		if (n->endOfWord) n->endOfWord = false;
	}

	//Search for the given word in the Trie and 
	//Return true or false as the case may be
	bool SearchWord(elementType word)
	{
		node *n = head;
		int size;

		for (int i = 0; i<word.length(); i++)
		{
			size = (int)word[i] - (int)'A';
			if (n->child[size] == NULL) return false;
			n = n->child[size];
		}
		if (n->endOfWord) return true;
		return false;
	}

	//find the count of words in the Trie 
	// which has the given word as prefix
	void SearchNumberWord(elementType word)
	{
		node *n = head;
		predNum = 0;
		SearchNumberWordIf(word, "", n, 0);		
	}

private:

	void DeleteNode(position p)
	{
		for (int i = 0; i<LETTER_SIZE; i++)
			if (p->child[i] != NULL) DeleteNode(p->child[i]);
		delete p;
	}

	void SearchNumberWordIf(elementType word, elementType result, position n, int i)
	{
		if (word[i] == '2')
			for (int k = 0; k<3; k++)
				if (n->child[k] != NULL) SearchNumberWordContinue(word, result, n->child[k], i, k);
		if (word[i] == '3')
			for (int k = 3; k<6; k++)
				if (n->child[k] != NULL) SearchNumberWordContinue(word, result, n->child[k], i, k);
		if (word[i] == '4')
			for (int k = 6; k<9; k++)
				if (n->child[k] != NULL) SearchNumberWordContinue(word, result, n->child[k], i, k);
		if (word[i] == '5')
			for (int k = 9; k<12; k++)
				if (n->child[k] != NULL) SearchNumberWordContinue(word, result, n->child[k], i, k);
		if (word[i] == '6')
			for (int k = 12; k<15; k++)
				if (n->child[k] != NULL) SearchNumberWordContinue(word, result, n->child[k], i, k);
		if (word[i] == '7')
			for (int k = 15; k<19; k++)
				if (n->child[k] != NULL) SearchNumberWordContinue(word, result, n->child[k], i, k);
		if (word[i] == '8')
			for (int k = 19; k<22; k++)
				if (n->child[k] != NULL) SearchNumberWordContinue(word, result, n->child[k], i, k);
		if (word[i] == '9')
			for (int k = 22; k<26; k++)
				if (n->child[k] != NULL) SearchNumberWordContinue(word, result, n->child[k], i, k);
	}

	void SearchNumberWordContinue(elementType word, elementType result, position n, int i, int j)
	{
		int size = word.length() - 1;

		if (n->number == word[i])
		{
			result += (char)(j + (int)'A');
			if (n->endOfWord && i == size) {								
				predictWords[predNum] = QString::fromStdString(result);
				predNum++;
			}
			if (i <= size)
				SearchNumberWordIf(word, result, n, i + 1);
		}
	}

	//letter and letter mapping
	char NumberLetter(char letter)
	{
		if (letter == 'A' || letter == 'B' || letter == 'C') return '2';
		else if (letter == 'D' || letter == 'E' || letter == 'F') return '3';
		else if (letter == 'G' || letter == 'H' || letter == 'I') return '4';
		else if (letter == 'J' || letter == 'K' || letter == 'L') return '5';
		else if (letter == 'M' || letter == 'N' || letter == 'O') return '6';
		else if (letter == 'P' || letter == 'Q' || letter == 'R' || letter == 'S') return '7';
		else if (letter == 'T' || letter == 'U' || letter == 'V') return '8';
		else if (letter == 'W' || letter == 'X' || letter == 'Y' || letter == 'Z') return '9';
	}
};

Tree tree;
/*T9 data and structure - END*/



//int activePad = 0;
//bool activeFlag = true;

MsgWindow::MsgWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	statusLabel = new QLabel(this);
	statusLabel->setText("User ID: " + profileID + "  ");
	ui.statusBar->addPermanentWidget(statusLabel);

	blinkNum = 0;
	padLayout[10] = { 0 };
	padType[10] = { 0 };

	timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(handleTimeout()));
	timer->start(1000);
}

MsgWindow::~MsgWindow()
{
}


/*
* Load the dictionary for T9 
*/
void MsgWindow::t9Init()
{
	file.open("./dictionary.txt");	
	int i = 0;
	//insert all words from dictionary
	if (file.is_open()) {
		while (!(file.eof()))
		{
			//file>>word;
			std::string word;
			std::getline(file, word);
			transform(word.begin(), word.end(), word.begin(), ::toupper);
			//cout << word << endl;
			tree.Insert(word);
			i++;
		}
	}
	else {
		int warningDlg = QMessageBox::information(NULL, "Load Failed", "Cannot load the dictionary!", QMessageBox::Ok);

		return;
	}
	//int warningDlg = QMessageBox::information(NULL, "Dictionary Loaded", "The Trie tree has been inserted " + QString::number(i) + " words.", QMessageBox::Ok);
}

/*
* Initialize command supervision
*/
void MsgWindow::handleTimeout() 
{
	if (timer->isActive())
	{
		timer->stop();
	}

	t9Init();
	on_setParaBtn_clicked();
	checkEmoState();
}

/*
* Set different keyboard layouts with the number of pads
*/
void MsgWindow::setPadLayout(int numOfPads)
{
	ui.pushButton_1->setStyleSheet(grayStyle);
	ui.pushButton_2->setStyleSheet(grayStyle);
	ui.pushButton_3->setStyleSheet(grayStyle);
	ui.pushButton_4->setStyleSheet(grayStyle);
	ui.pushButton_5->setStyleSheet(grayStyle);
	ui.pushButton_6->setStyleSheet(grayStyle);
	ui.pushButton_7->setStyleSheet(grayStyle);
	ui.pushButton_8->setStyleSheet(grayStyle);
	ui.pushButton_9->setStyleSheet(grayStyle);

	switch (numOfPads) {
	case 1:
		ui.pushButton_2->setStyleSheet(twoStyle);
		padLayout[1] = -1;//1 for none
		padLayout[2] = 25;//2: A to Z
		break;
	case 2:
		ui.pushButton_2->setStyleSheet(twoStyle);
		ui.pushButton_3->setStyleSheet(threeStyle);
		padLayout[1] = -1;
		padLayout[2] = 12;
		padLayout[3] = 25;
		break;
	case 3:
		ui.pushButton_2->setStyleSheet(twoStyle);
		ui.pushButton_3->setStyleSheet(threeStyle);
		ui.pushButton_4->setStyleSheet(fourStyle);
		padLayout[1] = -1;
		padLayout[2] = 7;
		padLayout[3] = 16;
		padLayout[4] = 25;
		break;
	case 4:
		ui.pushButton_2->setStyleSheet(twoStyle);
		ui.pushButton_3->setStyleSheet(threeStyle);
		ui.pushButton_4->setStyleSheet(fourStyle);
		ui.pushButton_5->setStyleSheet(fiveStyle);
		padLayout[1] = -1;
		padLayout[2] = 5;
		padLayout[3] = 11;
		padLayout[4] = 18;
		padLayout[5] = 25;
		break;
	case 5:
		ui.pushButton_2->setStyleSheet(twoStyle);
		ui.pushButton_3->setStyleSheet(threeStyle);
		ui.pushButton_4->setStyleSheet(fourStyle);
		ui.pushButton_5->setStyleSheet(fiveStyle);
		ui.pushButton_6->setStyleSheet(sixStyle);
		padLayout[1] = -1;
		padLayout[2] = 5;
		padLayout[3] = 11;
		padLayout[4] = 18;
		padLayout[5] = 25;
		break;
	case 6:
		ui.pushButton_2->setStyleSheet(twoStyle);
		ui.pushButton_3->setStyleSheet(threeStyle);
		ui.pushButton_4->setStyleSheet(fourStyle);
		ui.pushButton_5->setStyleSheet(fiveStyle);
		ui.pushButton_6->setStyleSheet(sixStyle);
		ui.pushButton_7->setStyleSheet(sevenStyle);
		padLayout[1] = -1;
		padLayout[2] = 3;
		padLayout[3] = 7;
		padLayout[4] = 11;
		padLayout[5] = 16;
		padLayout[6] = 20;
		padLayout[7] = 25;
		break;
	case 7:
		ui.pushButton_2->setStyleSheet(twoStyle);
		ui.pushButton_3->setStyleSheet(threeStyle);
		ui.pushButton_4->setStyleSheet(fourStyle);
		ui.pushButton_5->setStyleSheet(fiveStyle);
		ui.pushButton_6->setStyleSheet(sixStyle);
		ui.pushButton_7->setStyleSheet(sevenStyle);
		ui.pushButton_8->setStyleSheet(eightStyle);
		padLayout[1] = -1;
		padLayout[2] = 2;
		padLayout[3] = 5;
		padLayout[4] = 9;
		padLayout[5] = 13;
		padLayout[6] = 17;
		padLayout[7] = 21;
		padLayout[8] = 25;
		break;
	case 8:
		ui.pushButton_2->setStyleSheet(twoStyle);
		ui.pushButton_3->setStyleSheet(threeStyle);
		ui.pushButton_4->setStyleSheet(fourStyle);
		ui.pushButton_5->setStyleSheet(fiveStyle);
		ui.pushButton_6->setStyleSheet(sixStyle);
		ui.pushButton_7->setStyleSheet(sevenStyle);
		ui.pushButton_8->setStyleSheet(eightStyle);
		ui.pushButton_9->setStyleSheet(nineStyle);
		padLayout[1] = -1;
		padLayout[2] = 2;
		padLayout[3] = 5;
		padLayout[4] = 8;
		padLayout[5] = 11;
		padLayout[6] = 14;
		padLayout[7] = 18;
		padLayout[8] = 21;
		padLayout[9] = 25;
		break;
	default:
		break;
	}
}



void MsgWindow::MentalCommandAnimation(EmoStateHandle eState) {

	if (IS_FacialExpressionIsBlink(eState)) {
		blinkNum++;
		if (blinkNum > 1) {
			blinkNum = 0;
			//activeFlag = false;			
			return;
		}
	}

	IEE_MentalCommandAction_t actionType = IS_MentalCommandGetCurrentAction(eState);
	float actionPower = IS_MentalCommandGetCurrentActionPower(eState);
	QString activeNum = "";
	switch (actionType) {
	case MC_PUSH:
		activeNum = "2";
		break;
	case MC_PULL:
		activeNum = "3";
		break;
	case MC_LIFT:
		activeNum = "4";
		break;
	case MC_DROP:
		activeNum = "5";
		break;
	case MC_LEFT:
		activeNum = "6";
		break;
	case MC_RIGHT:
		activeNum = "7";
		break;
	case MC_ROTATE_LEFT:
		activeNum = "8";
		break;
	case MC_ROTATE_RIGHT:
		activeNum = "9";
		break;
	default:
		break;
	}

	if (actionPower * 100 >= ui.minPowerBox->value()) {
		inputWord = ui.inputLineEdit->text() + activeNum;
		ui.inputLineEdit->setText(inputWord);
		tree.SearchNumberWord(inputWord.toStdString());
		if (predNum > 0) {
			cycleNum = 0;
			ui.predictWordLineEdit->setText(predictWords[0]);
		}
		else {
			ui.predictWordLineEdit->setText("NO PREDICTION!");
		}
	}

	ui.powerBar->setValue(actionPower * 100);

#ifdef _WIN32
	Sleep(100);
#endif
	//int warningDlg = QMessageBox::information(NULL, "Letter #", "Letter# = " + QString::number(padType[activePad]), QMessageBox::Ok);
}


void MsgWindow::handleFacialExpression(EmoStateHandle eState)
{

}

void MsgWindow::checkEmoState()
{
	//int warningDlg = QMessageBox::information(NULL, "#Pad", "# Of Pads = "+QString::number(numOfPads), QMessageBox::Ok);
	readIf = true;
	for (int i = 0; i < 10; i++) padType[i] = 0;

	EmoEngineEventHandle eEvent = IEE_EmoEngineEventCreate();
	EmoStateHandle eState = IEE_EmoStateCreate();
	unsigned int userID = 0;
	flag = true;

	while (flag) {
		QCoreApplication::processEvents();				
		//if (!readIf) continue;
		int state = IEE_EngineGetNextEvent(eEvent);

		// New event needs to be handled
		if ((state == EDK_OK) && (ui.inputLineEdit->isActiveWindow())) {

			IEE_Event_t eventType = IEE_EmoEngineEventGetType(eEvent);
			IEE_EmoEngineEventGetUserId(eEvent, &userID);

			switch (eventType) {

				// New headset connected
			case IEE_UserAdded:
			{
				ui.powerBar->setValue(0);
				break;
			}
			// Headset disconnected, remove the existing socket
			case IEE_UserRemoved:
			{
				ui.powerBar->setValue(0);
				break;
			}

			// Send the MentalCommand animation if EmoState has been updated
			case IEE_EmoStateUpdated:
			{
				IEE_EmoEngineEventGetEmoState(eEvent, eState);
				MentalCommandAnimation(eState);
				break;
			}

			// Handle MentalCommand training related event
			case IEE_MentalCommandEvent:
			{
				ui.powerBar->setValue(0);
				break;
			}
			case IEE_FacialExpressionEvent:
				IEE_EmoEngineEventGetEmoState(eEvent, eState);
				handleFacialExpression(eState);
				break;
			default:
				ui.powerBar->setValue(0);
				break;
			}
		}
		else if (state != EDK_NO_EVENT) {
			//std::cout << "Internal error in Emotiv Engine!" << std::endl;
			break;
		}

		if (ui.inputLineEdit->text() != inputWord) {
			inputWord = ui.inputLineEdit->text();
			tree.SearchNumberWord(inputWord.toStdString());
			if (predNum > 0) {
				cycleNum = 0;
				ui.predictWordLineEdit->setText(predictWords[0]);
			}
			else {
				ui.predictWordLineEdit->setText("NO PREDICTION!");
			}
		}
#ifdef _WIN32
		Sleep(1500);
#endif
	}

	IEE_EmoStateFree(eState);
	IEE_EmoEngineEventFree(eEvent);
}


/*
* Set the operation parameters:
* Number of pads & Minimum action power to activate the typing
*/
void MsgWindow::on_setParaBtn_clicked()
{
	numOfPads = ui.numBox->value();
	minActionPower = ui.minPowerBox->value();
	//setPadLayout(numOfPads);
}

void MsgWindow::on_cycleBtn_clicked()
{
	readIf = false;
	if (predNum > 0)
	{
		cycleNum = (cycleNum + 1 >= predNum) ? 0 : (cycleNum + 1);
		ui.predictWordLineEdit->setText(predictWords[cycleNum]);
	}
}

void MsgWindow::on_sendBtn_clicked()
{
	if (predNum > 0)
	{
		ui.msgTextEdit->append(" "+predictWords[cycleNum]);
	}
	//	else {
		//ui.msgTextEdit->append("\n");
	//}

	ui.inputLineEdit->setText("");
	ui.predictWordLineEdit->setText("");
	predNum = 0;
	readIf = true;
}

void MsgWindow::on_actionMenu_triggered()
{
	MenuWindow *win = new MenuWindow();
	flag = false;
	this->close();
	win->show();
}

void MsgWindow::on_actionTraining_triggered()
{
	TrainWindow *win = new TrainWindow();
	flag = false;
	this->close();
	win->show();
}

void MsgWindow::on_actionLetter_Test_triggered()
{
	TestWindow *win = new TestWindow();
	flag = false;
	this->close();
	win->show();
}

void MsgWindow::on_actionMessage_triggered()
{
	MsgWindow *win = new MsgWindow();
	flag = false;
	this->close();
	win->show();
}

void MsgWindow::on_actionHelp_triggered()
{
	int instructionDlg = QMessageBox::information(NULL,
	"Instruction", "1.Select input area, and start typing.\n2.Click cycle button to select predictive word.\n3.Click send button to send a word.",
	QMessageBox::Ok);
}