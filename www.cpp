#include<iostream>
#include<conio.h>
using namespace std;
int getinetegeronly();
int main()
{
	int x;
	x=getinetegeronly();
	cout<<"\n you have  entered number :"<<x;
	getch();
}
int getinetegeronly(){
	int ch,num=0;
	do{
	ch=getch();
	if(ch>=48 && ch<=57){
	cout<<(ch-48);
	num=num*10+(ch-48);
}
if(ch==13)
break;
}while(1);
return (num);
}
