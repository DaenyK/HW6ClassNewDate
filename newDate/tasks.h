#include "dates.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	short nz, answer;
	int year, month, day;
	char s;

	do
	{
		cout << "1 - �������� �� ��������� ���� ���(�������� = =)" << endl
			<< "2,3 - ��������� ���� �� ��������� ����� ����(�������� +=, -=)" << endl
			<< "4,5 - �������� � ��������� ���� ���(�������� + , -)" << endl
			<< "������� ����� �������, ���� 0 - ��� ������: ";
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
			cout << "enter the first date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "enter the second date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date two(day, month, year);
			int result = (one == two);
			if (result == 1)
				cout << "\n��� ��� ���� ����������\n";
			else 	cout << "\n��� ��� ���� �� ����������\n";
		}break;

		case 2:
		{
			int num;
			cout << "������� ����(�. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "������� ���������� ����, ����� �������� ���� �� ��������� ����� ����: ";
			cin >> num;
			one += num;
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;

		case 3:
		{
			int num;
			cout << "������� ����(�. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "������� ���������� ����, ����� �������� ���� �� ��������� ����� ����: ";
			cin >> num;
			one -= num;
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;

		case 4:
		{
			cout << "enter the first date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "enter the second date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date two(day, month, year);
			date result = one + two;
			cout << result.getDay() << "." << result.getMonth() << "." << result.getYear() << endl;


		}break;

		case 5:
		{

		}break;

		}

		cout << endl;
		cout << "������ ����������?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);
	system("pause");

}