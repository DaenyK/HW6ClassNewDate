#pragma once
#include "Headers.h"

class date
{
private:
	int day;
	int month;
	int year;
public:
	date() = default;
	date(int day, int month, int year);
	~date() {}

	int getDay() { return day; }
	int getMonth() { return month; }
	int getYear() { return year; }

	bool leap(int year);
	bool sameDate(int day, int month, int year);
	
	bool operator==(date obj);
	bool operator!=(date obj);
	bool operator>(date obj);
	bool operator<(date obj);

	date operator++();
	date operator--();
	date operator+=(int day);
	date operator-=(int day);
	date operator=(date obj);

	date operator+(date obj);
	date operator-(date obj);

	friend void  operator>>(istream&is, date&obj);
	friend void operator<<(ostream&os, date&obj);
	
	friend void printDates(date *d, int size);
	void operator()(date obj);
};
