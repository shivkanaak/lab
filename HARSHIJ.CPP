#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{   clrscr();
    int i,j;
    for(i=0;i<=3;i++)
      {
       for(j=3;j>=0;j--)
       {
	 if(i>=j)
	 {
	   printf("*");
	 }
	 else
	 {
	 printf(" ");
	 }
	 }
	 printf("\n");
	 }
     getch();
     }