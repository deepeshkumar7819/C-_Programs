#include<stdio.h>
#include<conio.h>
int    main()
{
 const int x=10;
 const int *p;
 int **q;
  q=&p;
  
  p=&x;
 printf("x =%d\n",x);
 ++(**q);
 printf("x=%d",x);
 getch();
 return 0;
}
