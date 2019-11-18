#include<stdio.h>
#include<conio.h>
void main()
{	int a[10],i;
	clrscr();
	for(i=0;i<10;i++)
	{printf("please enter your %d value",i+1);
	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{

	printf("%5d",a[i]);
	}
	getch();
}