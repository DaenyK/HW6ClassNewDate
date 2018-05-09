#include "newDates.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	short nz, answer;
	int year, month, day;
	char s;

	do
	{
		cout << "�������� ����� � ������ Date  ��� �������� ����. � ������ ������ ����" << endl
			<< "�������-����, ������� ����������� ���� �� 1.�������� ��������������� "<<endl
			<<"������������ � �������-�����. � ������ ������ ���� ����������� ���������\n\n";
		cout << "1 - ++ \t\t 2 - -- \t\t 3 - != \n4 - == \t\t 5 -  > \t\t 6 - <\n";
		cout << "7 - >> \t\t 8 - << \t\t 9 - = \n10 - += \t 11 - -= \t\t 12 - ()\n0 - �����\n\n";

		cin >> nz;
		system("cls");

		switch (nz)
		{
		case 0:
		{
			exit(0);
		}break;
		
		case 1:
		{
			cout << "������� ����(�. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			one.operator++();
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;

		case 2:
		{
			cout << "������� ����(�. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			one.operator--();
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;

		case 3:
		{
			cout << "enter the first date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "enter the second date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date two(day, month, year);
			int result = (one != two);
			if (result == 1)
				cout << "\n��� ��� �� ���� ����������\n";
			else 	cout << "\n��� ��� ���� ����������\n";
		}break;

		case 4:
		{
			cout << "enter the first date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "enter the second date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date two(day, month, year);
			int result = (one == two);
			if (result == 1)
				cout << "\n��� ��� ���� ����������\n";
			else 	cout << "\n��� ��� ���� �� ����������\n";
		}break;
		
		case 5:
		{
			cout << "enter the first date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "enter the second date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date two(day, month, year);
			int result = (one == two);
			if (result == 1)
				cout << "\n��� ��� ���� ����������\n";
			else {
				result = (one > two);
				if (result == 1)
					cout << "\n������ ���� ������, ��� ������\n";
				else 	cout << "\n������ ���� ������, ��� ������\n";
			}
		}break;

		case 6:
		{
			cout << "enter the first date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "enter the second date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date two(day, month, year);
			int result = (one == two);
			if (result == 1)
				cout << "\n��� ��� ���� ����������\n";
			else {
				result = (one < two);
				if (result == 1)
					cout << "\n������ ���� ������, ��� ������\n";
				else 	cout << "\n������ ���� ������, ��� ������\n";
			}
		}break;

		case 10:
		{
			int num;
			cout << "������� ����(�. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "������� ���������� ����, ����� �������� ���� �� ��������� ����� ����: ";
			cin >> num;
			one += num;
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;

		case 11:
		{
			int num;
			cout << "������� ����(�. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "������� ���������� ����, ����� �������� ���� �� ��������� ����� ����: ";
			cin >> num;
			one -= num;
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;


		}

		cout << endl;
		cout << "������ ����������?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);
	system("pause");

	return 0;
}