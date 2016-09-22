#pragma once

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class pses {
private:
	unsigned int year;
	char* adviser = new char;
	unsigned int dia;
	unsigned int clockRate;

public:
	void setData(int pses_year, char* pses_adviser, int pses_dia, int pses_clockRate)
	{
		year = pses_year;
		strcpy(adviser, pses_adviser);
		dia = pses_dia;
		clockRate = pses_clockRate;
	}
	void showData()
	{
		cout << " |" << setw(7) << year << "|" << setw(24) << adviser << "|" << setw(23) << dia << "|" << setw(25) << clockRate << "|" << endl;
	}
};