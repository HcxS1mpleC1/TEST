#include <windows.h>
#include<iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

HHOOK keyboardHook = 0;		

LRESULT CALLBACK LowLevelKeyboardProc(
	_In_ int nCode,		
	_In_ WPARAM wParam,	
	_In_ LPARAM lParam	
) {
	KBDLLHOOKSTRUCT* ks = (KBDLLHOOKSTRUCT*)lParam;	
	if (ks->flags == 128 || ks->flags == 129)
	{
		switch (ks->vkCode) {
		case 0x30: case 0x60:
			cout << "��⵽������" << "0" << endl;
			break;
		case 0x31: case 0x61:
			cout << "��⵽������" << "1" << endl;
			break;
		case 0x32: case 0x62:
			cout << "��⵽������" << "2" << endl;
			break;
		case 0x33: case 0x63:
			cout << "��⵽������" << "3" << endl;
			break;
		case 0x34: case 0x64:
			cout << "��⵽������" << "4" << endl;
			break;
		case 0x35: case 0x65:
			cout << "��⵽������" << "5" << endl;
			break;
		case 0x36: case 0x66:
			cout << "��⵽������" << "6" << endl;
			break;
		case 0x37: case 0x67:
			cout << "��⵽������" << "7" << endl;
			break;
		case 0x38: case 0x68:
			cout << "��⵽������" << "8" << endl;
			break;
		case 0x39: case 0x69:
			cout << "��⵽������" << "9" << endl;
			break;
		case 0x41:
			cout << "��⵽������" << "A" << endl;
			break;
		case 0x42:
			cout << "��⵽������" << "B" << endl;
			break;
		case 0x43:
			cout << "��⵽������" << "C" << endl;
			break;
		case 0x44:
			cout << "��⵽������" << "D" << endl;
			break;
		case 0x45:
			cout << "��⵽������" << "E" << endl;
			break;
		case 0x46:
			cout << "��⵽������" << "F" << endl;
			break;
		case 0x47:
			cout << "��⵽������" << "G" << endl;
			break;
		case 0x48:
			cout << "��⵽������" << "H" << endl;
			break;
		case 0x49:
			cout << "��⵽������" << "I" << endl;
			break;
		case 0x4A:
			cout << "��⵽������" << "J" << endl;
			break;
		case 0x4B:
			cout << "��⵽������" << "K" << endl;
			break;
		case 0x4C:
			cout << "��⵽������" << "L" << endl;
			break;
		case 0x4D:
			cout << "��⵽������" << "M" << endl;
			break;
		case 0x4E:
			cout << "��⵽������" << "N" << endl;
			break;
		case 0x4F:
			cout << "��⵽������" << "O" << endl;
			break;
		case 0x50:
			cout << "��⵽������" << "P" << endl;
			break;
		case 0x51:
			cout << "��⵽������" << "Q" << endl;
			break;
		case 0x52:
			cout << "��⵽������" << "R" << endl;
			break;
		case 0x53:
			cout << "��⵽������" << "S" << endl;
			break;
		case 0x54:
			cout << "��⵽������" << "T" << endl;
			break;
		case 0x55:
			cout << "��⵽������" << "U" << endl;
			break;
		case 0x56:
			cout << "��⵽������" << "V" << endl;
			break;
		case 0x57:
			cout << "��⵽������" << "W" << endl;
			break;
		case 0x58:
			cout << "��⵽������" << "X" << endl;
			break;
		case 0x59:
			cout << "��⵽������" << "Y" << endl;
			break;
		case 0x5A:
			cout << "��⵽������" << "Z" << endl;
			break;
		case 0x6A:
			cout << "��⵽������" << "*" << endl;
			break;
		case 0x6B:
			cout << "��⵽������" << "+" << endl;
			break;
		case 0x6D:
			cout << "��⵽������" << "-" << endl;
			break;
		case 0x6E:
			cout << "��⵽������" << "." << endl;
			break;
		case 0x6F:
			cout << "��⵽������" << "/" << endl;
			break;
		case 0x0D:
			cout << "��⵽������" << "Enter" << endl;
			break;
		case 0xA0: case 0xA1:
			cout << "��⵽������" << "Shift" << endl;
			break;
		case 0x08:
			cout << "��⵽������" << "Backspace" << endl;
			break;
		case 0x20:
			
			break;
		}

	}

	return CallNextHookEx(NULL, nCode, wParam, lParam);
}
