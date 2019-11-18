#include<stdio.h>
#include<conio.h>
void main()
{
	int i,t;
	clrscr();
	do
	{
		t=2*i;
		printf("%d",t);
		i++;
	}
	while(i<=10);
	getch();
}