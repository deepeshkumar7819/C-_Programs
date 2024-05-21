#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int day;
	cout<<"enter the day := ";
	cin>>day;
	switch(day){
	case 1:
		cout<<"sunday";
		break;
		case 2:
		cout<<"Monday";
		break;
		case 3:
		cout<<"tuseday";
		break;
		case 4:
		cout<<"wednesday";
		break;
		case 5:
		cout<<"thursday";
		break;
		case 6:
		cout<<"fridar";
		break;
		case 7:
		cout<<"saturday ";
		break;
		default :
		cout<<"invalid not day";
	}
		getch();
}
