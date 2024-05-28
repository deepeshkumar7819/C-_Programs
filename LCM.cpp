#include<iostream>
#include<conio.h>
using namespace std;
int main()
/*{
	int a,b,H;
	cout<<"enter is number:";
	cin>>a;
	cout<<"enter is number:";
	cin>>b;
	H=a<b?a:b;
	for(H;H>=1;H++)
	{
		if(a%H==0 && b%H==0)
		break;
	}
	cout<<"LCM is:"<<H;
	getch();
}
*/
{
	int n,i;
	cout<<"enter the number:";
	cin>>n;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		break;
	}
	if(n==i)
	cout<<"Number is peime:"<<n;
	else
	cout<<"number is not prime:<<n";
	getch();
	return 0; 
}
