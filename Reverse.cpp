#include<iostream>
#include<conio.h>
//#include<strigh.h> 
# progam GCC diagnostic ighored "write-strings"
using namespace std;
class student
{
    private:
    	int rollno;
    	char name[20];
    	class Address
    	{
    		private:
    			int houseno;
				char stree[20];
				char city[20];
				char stata[20];
				char pincode[7]; 
				public:
			void Address(int h,char*s,char *c,int *st,char*pin)			
		}
		{
			houseno=1;
			strcpy(strect,s);
			strcpy(city,c);
			strcpy(state,st);
			strcpy(pincode,pin);
		}
		void showAddress()
		{
		cout<<"House No:="<<house <<endl;
		cout<<"strect:"<<strcet<<endl;
		cout<<"city name:"<<city<<ednl;	
		cout<<"state:"<<stata<<endl;
		cout<<"pincode:"<<pincode<<endl;
		}
    	
};
Address add 
{
   public:
   	void setrollno(int)
   {
   	roll no=r;
   }
	void setname(char*n)
	{
		stcrpy(namen)
	}
void set Address(int sh,char*ss,char*sc,char*sst,char*spin)
{
	add.setAddress(sh,ss,sc,sst,spin)
}
void show student()
{
	cout<<"studentData\n\n\n\n"<<endl;
	cout<<"Roll no"<<" "<<""<<Rollno<<rndl;
	cout<<"student name:="<<" "<<name<<endl;
	add. show Address();
}

};
int main()
{
	student s1();
	s1.setRollno(101);
	s1.setName("Deepesh");
	s1.setAddress(200,"chauparhauj","Atrauli","up","202280");
	s1.sho studet();
	getch();
	return 0;
}

