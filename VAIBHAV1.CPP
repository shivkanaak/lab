#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float C,F,h;
	printf("temp in faherenhite");
	scanf("%f",&F);

	h=5/9;
	C=h*(F-32);

	printf("%f",C);

	getch();
}