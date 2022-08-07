#pragma warning (disable:4996)
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include "head.h"
using namespace std;

/*
HWND hWnd = GetConsoleWindow();
*/

void f(int);
void test(int*);
int main()
{
	/*
	ShowWindow(hWnd, SW_HIDE);
	getch();
	*/
	int a = 0;
	int box = 0;
	test(&box);
	cout << box << endl;
	f(box);
	return 0;
}
void test (int *p)
{
	int b = 0;
	int key;
	while (true)
	{
		if (key = _kbhit())
		{
			key = _getch();
		}
		if (key == 81)
		{
			*p = b;
			return;
		}
		if (key != 0)
		{
			b++;
			key = 0;
		}
		
	}
}

void f(int pt)
{
	ofstream osf;
	
}