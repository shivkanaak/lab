#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	clrscr();
	printf("please enter your correct name");
	scanf("%[a-z,A-Z, ,]s",str);

	printf("%s",str);
	getch();
}





























