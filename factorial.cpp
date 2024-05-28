#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,H;
  cout<<"enter is number:=";
  cin>>a;
    cout<<"enter is number:=";
    cin>>a;
    H=a<b?a:b;
    for(H;H<=a*b;H++)
    {
    	if(H%a==0 && H%b==0)
    	break;
	}
	cout<<"lcm:="<<H;
	getch();
	return 0;
	
}
