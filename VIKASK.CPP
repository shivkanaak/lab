

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
	if(i>=j)
		{ printf("*");
	   delay(50);

	   }

	}printf("\n");

	}
	for(i=0;i<=5;i++)
	{
	for(j=0;j<=5;j++)
	{
	if(j>=i)
	  { printf("*");
	  delay(60);
	  }
	  }printf("\n");
	}
	getch();
	}
