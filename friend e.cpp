#include<iostream>
#include<conio.h>
using namespace std;
class Add{
	private:
		int a,b;
		public:
		void setData(int x,int y)
		{
		a=x;
		b=y;	
	}
	void showData()
	{
	  cout <<"value of A:="<<a;
	  cout <<"value od B:="<<b; 
	 }
	 Add friend operator +(Add,Add);
	 
};
    Addfriend opertor+(Add a,Add b);
{ 
    Add t;
	t.a=a.a+b.a;
	t.b=a.b+b.a;
	return(t) ; 	
}
int main()
{

Add a1,a2,a3;
a1.setData(2,3);
a2.showData(4,5);
a3=a1+a2;
a3.showData();
}



 
