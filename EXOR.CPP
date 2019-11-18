#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter the first value");
	scanf("%d",&a);
	printf("enter the second value");
	scanf("%d",&b);
	c=a^b;
	printf("%d",c);
	getch();
}
