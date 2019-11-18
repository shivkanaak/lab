#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<=8;i++)
	{
	 for(j=0;j<=8;j++)
	 {
	  if(j<=i)
	  {
	  printf("*");
	  }
	 }
	 printf("\n");
	 }
	 for (i=0;i<=8;i++)
	 {
	  for(j=0;j<=8;j++)
	  {if(i<=j)
	  {
	  printf("*");
	  }
	 }
	 printf("\n");
	 for(i=0;i<=8;i++)
	 {
	  for(j=0;j<=8;j++)
	  {if(i<=j)
	  {
	  printf("*");
	  }
	 }
	 printf("\n");
	 getch();
	 }
	 }
	 getch();
	 }




