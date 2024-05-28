#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
		int a,b;
		int p;
		public:
			A()
			{
				a=0;
				b=0;
				p=new int();
			}
			A(int x,int y,int z)
			{
				a=x;
				b=y;
				p=nwe int();
				p=z;
			}
			 void showData()
			 {
			 	cout <"enter of A:="<<a<<endl;
			 	cout <"enter of B:="<<b<<endl;
			 	cout <"enter of P:="<<p<<endl;
			 }

};
int main(){
	A a1,a2,a3,a4(100,200,300,400);
	a1.showData();
	getch();
	return 0;
};
