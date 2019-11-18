#include<stdio.h>
#include<conio.h>

     void main()
{
   int i,j,k;
   clrscr();
   printf("enter a num\n");
   scanf("%d",&j);
   for(i=1;i<=10;i++)
   {
   k=i*j;
   printf("\n%d",k);
   }
   getch();
}