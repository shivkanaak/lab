#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter the intger");
	scanf("%d",&a);
	(0==a%2)? printf("even"):printf("odd");
	getch();
}
