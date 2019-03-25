#include "date.h"


Date::Date()
{
	date=1;
	month=1;
	year=1;
}

Date::Date(int a,int b,int c)
{
	if(a>=1 && a<=30 && b>=1 && b<=12 && c>=1000 && c<=9999)
	{
	month=a;
	date=b;
	year=c;
	}
	else
	{
		Date();
	}
}

bool Date:: operator==(const Date &d)
{
	if (this->date == d.date && this->month== d.month && this->year==d.year)
	{
		return true;
	}

	else 
	{
		return false;
	}

}

Date Date::operator+(int a){

	if(this->date +a <=30)
	{
		this->date =this->date+a;
	}

	if(this->date +a >=30 )
	{
		this->month=this->month +1;
		this->date=(this->date+a)-30;
		if(this->month==12)
		{
			this->month =1;
			this->year=this->year+1;
		}
	}


	return *this;
}

Date Date::operator=(const Date&d)
{
	this->date=date;
	this->month=month;
	this->year =year;

	return *this;

}

Date Date::operator--()
{
	this-> date =  -- this-> date;


	return *this;
}

Date Date::operator--(int n)
{
	 

	Date temp;
	
	temp=*this;

	 this-> date--;

	return temp;

}

int Date::operator[](int i)
{
	if(i>3 &&i<0)
	{
		cout<<"index can only be 0,1,2\n";
			return 0;
	}

	if(i==0)
	{
		return date;
	}
	if(i==1)
	{
		return month;
	}
	if(i==2)
	{
		return year;
	}


}