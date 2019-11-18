#include<stdio.h>
#include<conio.h>
void main ()
{
	int a=5, b=6;
	clrscr();
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\n",a);
	printf("%d",b);
	getch();

}
