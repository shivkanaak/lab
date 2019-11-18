#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	for(a=0;a<=4;a++)
	{
		for(b=0;b<=4;b++)
		{
			printf("%d,%d",a,b);
		}
		printf("\n");
	}
	getch();
}