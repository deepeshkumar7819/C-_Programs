#include<iostream>
#include<conio.h>
class product
{
private :
int m,n;
public :
void setdata(int x,int y)
{
m=x;
n=y;
}
int getM()
{
return(m);
}
int getN()
{
return(n);
}
};
class Item
{
private :
int a,b;
public :
void showdata()
{
cout<<"A ="<<a<<"\nB ="<<b;
}
Item()
{
}
Item(product p)
{
a=p.getM();
b=p.getN();
}
};
int main()
{
Item i1;
product p1;
p1.setdata(10,15);
i1=p1;
i1.showdata();
getch();
return 0;
}
