#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter the intger value");
	scanf("%d",&a);
	if(a%2==0)
		{
			printf("even");
		}
	if(a%2==1)
		{
			printf("odd");
		}
	getch();
}

