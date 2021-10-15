# Think-Type System #
The MSc(CompSc) Dissertation Project by Yingshu Chen

[[Project Homepage](https://yschen.site/think_type_system)]
[[Video Demo](https://vimeo.com/243664058)]

## Briefing ##
This system is a "typing" system via Brainwave Control using the Emotiv heaset.

 * The system includes 4 parts:
 * 1) Login with user ID first
 * 2) Training mode section for training typing pads
 * 3) Test Mode section for testing trained pads
 * 4) Message Mode for T9 typing experience via Brainwave Control
 * ***************************************************************************

 * 6 Windows:
 * 1) Login Page (LoginWindow)
 * 2) Menu Page (MenuWin)
 * 3) Training Window (TrainWin> with a dialog TrainDlg)
 * 4) Test Windown (TestWin)
 * 5) Message Window (MsgWin)

## Platforms ##
Programing Environment:
Visual Studio 2015 + Qt3.5.0_msvc(Qt Creater 4.2.1)

OS: Win10 64bit
 
Language: C++


## Project Setup ##
Some instructions for the program setup. 

1. Additional Include Directories: Add the folder "include"
2. Additional Library Directories: Add the folder "lib/win32"
3. Input: Add the library "edk.lib"

4. In program(code): include Emotiv headers
 - 	#include “Iedk.h”
 - 	#include “IedkErrorCode.h”
 - 	#include "IEmoStateDLL.h"

## Additions ##
T9 Dictionary example (Trie tree used in this system):
https://github.com/chenyingshu/T9-Dictionary

Demo video:
https://vimeo.com/243664058
