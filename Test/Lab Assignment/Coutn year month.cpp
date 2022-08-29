/******************************************************************************
Write a program which accepts days as integer(ex. 7856 days) and display total number of years,
months and days in it.

365 days = 1year
12 month = 1year
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int days,y,m,d;
	cout<<"Enter no. of days : ";
	cin>>days;
	y=days/365;
	days=days%365;
	m=days/30;
	
	cout<<"Years : "<<y<<"\nMonths : "<<m<<"\nDays : "<<days;

    
    
    return 0;
}
