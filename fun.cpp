#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
		int p,r,t;
		float si;
		public:
	getData(int a,int b,int c)
	{
		p=a;
		r=b;
		t=c;
	    cout<<"enter the value p=";
		cout<<"enter the value r=";
		cout<<"enter the value t=";
	si=(p*r*t/100);
	cout<<"enter the value si="<<si;
}
};
int maui(){
	A a1;
	a1.getData(1000,3,4);
	getch();
	return (0);
}
