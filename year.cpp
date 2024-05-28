#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year:= ";
	cin>>year;
	if(year%4)
	cout<<"not a leap year:";
	else if(year%100)
	 cout<<"leap year";
	 else if(year%400)
	 cout<<"not a  leap year ";
	 else
	 cout<<"leap year";
	 getch();
}
