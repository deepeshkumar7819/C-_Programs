#include<iostream>
#include<conio.h>
//#include<math.h>
using namespace std;
int main()
{
   int x,y,i,p=1;
cout<<"enter a number and its power:";
cin>>x>>y;
for(i=1;i<=y;i++)
p=p*y;
cout<<"power of y:"<<p;
getch();

}
