#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	clrscr();
	printf("please check your username by entering your email id \n");
	scanf("%[^'\n',^'@']s",a);
	printf("\n");

	printf("%s is your new username",a);
	getch();
}