#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,H;
	cout<<"enter is number:";
	cin>>a;
	cout<<"enter is number:";
	cin>>b;
	H=a<b?a:b;
	for(H;H>=1;H++)
	{
		if(H%a==0 && H%b==0)
		break;
	}
	cout<<"HCM is:"<<H;
	getch();
}

