#include<stdio.h>
#include<conio.h>
#include<dos.h>

 void main()
 {
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=i;j>=1;j--)
  {
   printf("%d",j%2);
   delay(200);
   }
   printf("\n");
   }
   getch();
   }