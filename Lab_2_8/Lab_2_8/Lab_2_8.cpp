// Lab_2_8.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

int main()
{
	cout << "������� ���������� ����� � �������: ";
	int n;
	cin >> n;
	pses *projects = new pses[n];
	system("pause");
	delete[]projects;
    return 0;
}

