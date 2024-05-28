#include<iostream>
#include<conio.h>
using namespace std;
void fun(void);
int main()
{
	int a,b,c;
	cout<<"Enter the a:";
	cin>>a;
	cout<<"Enter the b:";
	cin>>b;
		try{
		if(b=0);
		fun();
		c=a+b;
		cout<<"Resust is :<<c";
	}
	catch(int c)
	{
		cout<<"\n you con divale any number by 0 :"<<c;
	}
	getch();
	return 0;
}

	//void fun();

