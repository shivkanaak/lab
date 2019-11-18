#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{	clrscr();
	int i,j;
	for(i=0;i<=5;i++)
	{
	for(j=0;j<=5;j++)
	{
	if(i<=j)
	{ printf("*");
	   delay(500);

	   }

	}printf("\n");

	}
	getch();
	}
