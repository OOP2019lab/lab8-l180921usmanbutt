#include <iostream>
#include <string>
using namespace std;

class Date{
	int date;
	int month;
	int year;
public:
	Date();
	Date(int,int,int);
	friend ostream& operator<<(ostream &obj, const Date& d)
	{

		static string monthNames[13] = { " ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" } ;
		obj <<  monthNames[d.month] <<" " << d.date<<","<<  d.year<<endl;
		return obj;
	}

	friend istream& operator>>(istream &obj,  Date& d)
	{
		cout<<"enter date\n";
		obj>> d.date;

		cout<<"enter month\n";
		obj>>d.month;

		cout<<"enter the year\n";
		obj>>d.year;

		return obj;
	}

	bool operator==(const Date& d);
	Date operator +(int a);
	Date operator =(const Date &d);
	Date operator--();
	Date operator--(int);
	int operator[](int i);

};

