#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5],i;
	cout<<"enter datain array=:"<<"\n";
	for(i=0;i<=5-1;i++)
	cin>>a[i];
	getch();
   for(i=0;i<=5;i++)
	cout<<"\n"<<*(a+4);
	cout<<"\n"<<a[i];
	getch();\
	return 0;
}

