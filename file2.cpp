#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
 int main() 
{
	ofstream dout;
	char str[20];
	dout.open("myfile .app");
	cout<<"enter you text=";
	cin.getline(str,20);
	dout<<str;
	getch();
	dout.close();
	getch ();
	return 0;
	
}
