#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{ 	int i,j;
	clrscr();
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=4;j++)
	if(j>=i)
	{
	printf("*");
	delay(50);
	}

	else{printf(" ");
	}

	printf("\n");
	}  for(i=0;i<=4;i++)
	{
	for(j=0;j<=4;j++)
	if(i>=j)
	{
	printf("*");
	delay(50);
	}

	else{printf(" ");
	} printf("\n");
	}

	getch();
}