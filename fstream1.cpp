#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
 ofstream fount;
 fount.open("hjfile.dat");
getch();
fount<<"hello compter";
fount<<"I should like you";
getch();
fount.close();
getch();
return 0;
}
