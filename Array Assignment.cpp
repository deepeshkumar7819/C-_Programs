#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class DynArray
{
	private:
		int capacity;
		int lastIndex;
		int *ptr;
		protected:
        void doubleArray();
        void halfArray();
		public:
		DynArray(int);
		DynArray(DynArray &);
        DynArray& operator=(DynArray &);
			bool isEmpty();
			bool isFull();
			void append(int);
			void insert(int,int);
			void edit(int,int);
			void del(int);
			int getItme(int);
			int count();
			~DynArray();
			int find(int);
			int getCapacity();
};
DynArray:: DynArray(int size)
{
	if(size>0){
		capacity=size;
		lastIndex=-1;
		ptr=new int[capacity];
	}
	else
	ptr=NULL;
	
}
DynArray::DynArray(DynArray &a)
{
    capacity=a.capacity;
    lastIndex=a.lastIndex;
    ptr=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=a.ptr[i];
}
DynArray& DynArray::operator=(DynArray &a)
{
    if(this != &a){
        if(ptr!=NULL)
        delete []ptr;
        capacity=a.capacity;
        lastIndex=a.
		lastIndex;
        ptr=new int[capacity];
        for(int i=0;i<=lastIndex;i++)
            ptr[i]=a.ptr[i];
    }
    return *this;
}
void DynArray::doubleArray()
{
    int *temp;
    temp=new int[capacity*2];
    for(int i=0;i<=lastIndex;i++)
    temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    delete []temp;
    capacity*=2;
}
void DynArray::halfArray()
{
     int *temp;
    temp=new int[capacity/2];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity/=2;
}
bool DynArray::isEmpty()
{
	return lastIndex==-1;
}
bool DynArray:: isFull()
{
	return lastIndex==capacity-1;
}
void DynArray::append(int data)
{
	if(isFull())
	cout<<"\n Overflow";
	else
	{
		lastIndex++;
		ptr[lastIndex]=data;
	}
	
}
void DynArray::insert(int index,int data)
 {
 	if(index<0 || index>lastIndex+1)
 	cout<<"\n index Index";
 	else if(isFull())
 	cout<<"\n overflow";
 	else
 	{
 		for(int i=lastIndex;i>=index;i--)
 		{
 			ptr[i+1]=ptr[i];
		 }
		 ptr[index]=data;
		 lastIndex++;
	 }
 }
 void DynArray::edit(int Index,int data)
 {
 	if(Index<0 || Index>lastIndex)
 	cout<<"\nInvalid Index or emptr array";
 	else
 	ptr[Index]=data;
 }
 void DynArray::del(int index)
 {
 	int i;
 	if(index<0||index>lastIndex)
 	cout<<"\ninvalid index or empty array";
 	else
 	{
 		for(i=index;i<lastIndex;i++)
 		ptr[i]=ptr[i+1];
 		lastIndex--;
	 }
 }
 int DynArray::getItme(int index)
 {
 	if(index<0||index>lastIndex)
 	{
 		cout<<"\n invalid index or empty array";
 		throw new exception();
	 }
	 return ptr[index];
 }
 int DynArray::count()
 {
 	return lastIndex+1;
	  
 }
 DynArray::~DynArray()
 {
 	delete[]ptr;
 }
 int DynArray::find(int data)
 {
 	int i;
 	for(i=0;i<=lastIndex;i++)
 	if(ptr[i]==data)
 	return i;
 	return -1;
 }
int DynArray::getCapacity()
{
    return capacity;
}

int menu()
 {
 	int choice;
 	cout<<"\n \nArray data structure=:";
 	cout<<"\n1.Append Element";
 	cout<<"\n2.Index Element";
 	cout<<"\n3.Edit Element";
 	cout<<"\n4.Delete Element";
 	cout<<"\n5.Get Element";
 	cout<<"\n6.conut Element";
 	cout<<"\7.Exit Element";
 	cout<<"\n\nenter  your choice=:";
cin>>choice;
return (choice); 	
 
}
 int main()
 {
 	//DynArray a1;
 	//int lastIndex;
 	DynArray a1(4);
 	while(1)
 	{
 		system("cls");
		switch(menu())
		{
			case 1:
				a1.append(12);
				a1.append(13);
						
				break;
				case 2:
					a1.insert(1,23);
					break;
					case 3:
						a1.edit(4,15);
						break;
						case 4:
							
							a1.del(1);
							break;
							case 5:
								a1.getItme(6);
								break;
								case 6:
									a1.count();
									    break;
									     case 7:
							    
									exit(0);
									default:
									cout<<"\n Invalid Choice";
		getch();
	}
}
}



	

	
	 
 
