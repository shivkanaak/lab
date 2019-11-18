#include<stdio.h>
#include<conio.h>

void main()

{ do
 int a;
  clrscr();
{  printf("press 1 for hello");
   printf("press 2 for hi");
   scanf("%d",&a);
   if(a==1)
   { printf("hello");
   }
   else if (a==2)
   { printf("hi"); }
   else
 {  printf("wrong choice");
 }
 getch();
 while(1);}

