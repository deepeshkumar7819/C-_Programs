#include<iostream>
#include<conio.h>
using namespace std;
class add{
	private:
		int a,b,c;
		public:
			void fun1(int a)
			{
			cout<<"fun1";	
			}

void fun1(int a,int b)
{
    cout<<"fun2";	
}

    void fun1(int a, int b,int c)
    {
       cout<<"fun3";	
	}
};
  int main()
  {
  add a1;
  a1.fun1(100);
  //a1.fun2(100);
  //a1.fun3(100);
  getch();
  return 0;
}

