#pragma once

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <iostream>
#include <vector>

using namespace std;

class pses {
private:
	unsigned int year;
	char* adviser;
	unsigned int dia;
	unsigned int clockRate;

public:
	/*
	pses(int pses_year, char* pses_adviser, int pses_dia, int pses_clockRate)
	{
		setData(pses_year, pses_adviser, pses_dia, pses_clockRate);
	}
	*/
	void setData(int pses_year, char* pses_adviser, int pses_dia, int pses_clockRate)
	{
		year = pses_year;
		adviser = pses_adviser;
		dia = pses_dia;
		clockRate = pses_clockRate;
	}
	void showData()
	{
		cout << "data: " << year << "." << adviser << "." << dia << endl;
	}
};