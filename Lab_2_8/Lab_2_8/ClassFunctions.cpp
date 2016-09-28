#include "stdafx.h"

void pses::setData(int pses_year, char* pses_adviser, int pses_dia, int pses_clockRate)
{
	year = pses_year;
	strcpy(adviser, pses_adviser);
	dia = pses_dia;
	clockRate = pses_clockRate;
}

void pses::showData()
{
	cout << " |" << setw(7) << year << "|" << setw(24) << adviser << "|" << setw(23) << dia << "|" << setw(25) << clockRate << "|" << endl;
}

unsigned int pses::getYear()
{
	return year;
}
char* pses::getAdviser()
{
	return adviser;
}
unsigned int pses::getDia()
{
	return dia;
}
unsigned int pses::getClockRate()
{
	return clockRate;
}