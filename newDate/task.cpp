#include "newDates.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	short nz, answer;
	int year, month, day;
	char s;

	do
	{
		cout << "Создайте класс с именем Date  для хранения даты. В классе должна быть" << endl
			<< "функция-член, которая увеличивает день на 1.Напишите соответствующие "<<endl
			<<"конструкторы и функции-члены. В классе должны быть перегружены операциии\n\n";
		cout << "1 - ++ \t\t 2 - -- \t\t 3 - != \n4 - == \t\t 5 -  > \t\t 6 - <\n";
		cout << "7 - >> \t\t 8 - << \t\t 9 - = \n10 - += \t 11 - -= \t\t 12 - ()\n0 - выход\n\n";

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
			cout << "введите дату(н. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			one.operator++();
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;

		case 2:
		{
			cout << "введите дату(н. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
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
				cout << "\nэти две НЕ даты одинаковые\n";
			else 	cout << "\nэти две даты одинаковые\n";
		}break;

		case 4:
		{
			cout << "enter the first date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "enter the second date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date two(day, month, year);
			int result = (one == two);
			if (result == 1)
				cout << "\nэти две даты одинаковые\n";
			else 	cout << "\nэти две даты НЕ одинаковые\n";
		}break;
		
		case 5:
		{
			cout << "enter the first date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "enter the second date(12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date two(day, month, year);
			int result = (one == two);
			if (result == 1)
				cout << "\nэти две даты одинаковые\n";
			else {
				result = (one > two);
				if (result == 1)
					cout << "\nпервая дата больше, чем вторая\n";
				else 	cout << "\nпервая дата меньше, чем вторая\n";
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
				cout << "\nэти две даты одинаковые\n";
			else {
				result = (one < two);
				if (result == 1)
					cout << "\nпервая дата меньше, чем вторая\n";
				else 	cout << "\nпервая дата больше, чем вторая\n";
			}
		}break;

		case 10:
		{
			int num;
			cout << "введите дату(н. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "введите количество дней, чтобы изменить дату на указанное число дней: ";
			cin >> num;
			one += num;
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;

		case 11:
		{
			int num;
			cout << "введите дату(н. 12.12.2012): "; cin >> day >> s >> month >> s >> year;
			date one(day, month, year);
			cout << "введите количество дней, чтобы изменить дату на указанное число дней: ";
			cin >> num;
			one -= num;
			cout << one.getDay() << "." << one.getMonth() << "." << one.getYear() << endl;
		}break;


		}

		cout << endl;
		cout << "хотите продолжить?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);
	system("pause");

	return 0;
}