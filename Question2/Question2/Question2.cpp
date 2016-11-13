// Question2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <iomanip>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int remainder = 0;

	double coin2 = 2.0, coin1 = 1.0, coin50p = 0.50, coin20p = 0.20, coin10p = 0.10, coin5p = 0.05, coin2p = 0.02, coin1p = 0.01, sum1 = 0.0, sum2 = 0.0;

	cout << "\n\n\tPlease enter a sum under 5 pounds: ";
	cin >> sum1;
	
	if (sum1 = +5)
	{
		cout << "Please enter a value below 5 pounds";
	}

	sum2 = sum1 * 100;
	remainder = sum2;

	coin2 = remainder / 200;
	remainder = remainder % 200;

	coin1 = remainder / 100;
	remainder = remainder % 100;

	coin50p = remainder / 50;
	remainder = remainder % 50;

	coin20p = remainder / 20;
	remainder = remainder % 20;

	coin10p = remainder / 10;
	remainder = remainder % 10;

	coin5p = remainder / 5;
	remainder = remainder % 5;

	coin2p = remainder / 2;
	remainder = remainder % 2;

	coin1p = remainder / 1;
	remainder = remainder % 1;

	cout << "\n\n\The number of 2 pounds you need is " << coin2;
	cout << "\n\n\The number of 1 pounds you need is " << coin1;
	cout << "\n\n\The number of 50 pences you need is " << coin50p;
	cout << "\n\n\The number of 20 pences you need is " << coin20p;
	cout << "\n\n\The number of 10 pences you need is " << coin10p;
	cout << "\n\n\The number of 5 pences you need is " << coin5p;
	cout << "\n\n\The number of 2 pences you need is " << coin2p;
	cout << "\n\n\The number of 1 pences you need is " << coin1p;
	
	
	_getch();
    return 0;
}

