#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <cstdarg>
#include <cctype>
#include <cstring> 
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

#ifndef LOGGER_H
#define LOGGER_H

enum Colors
{
	Green = 2,
	Red = 4,
	Yellow = 6
};

struct Logger
{
	static bool _printLogs;
	static const unsigned short _initColor = Yellow;
	static const unsigned short _runningColor = Green;
	static const unsigned short	_endColor = Red;
	static void initFunc()
	{
		if (_printLogs)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _initColor);
			cout << endl;
			cout << "Programm has been launched" << endl;
			cout << endl;
		}
	}
	static void runningFunc()
	{
		if (_printLogs)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _runningColor);
			cout << endl;
			cout << "Programm is running" << endl;
			cout << "Wait for it's end" << endl;
			cout << endl;
		}
	}
	static void endFunc()
	{
		if (_printLogs)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _endColor);
			cout << endl;
			cout << "Programm has been finished" << endl;
			cout << "Now, you can close the console" << endl;
			cout << endl;
		}
	}
};

#endif 