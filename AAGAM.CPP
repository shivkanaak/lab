#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,f=1;
	clrscr();
	printf("Enter a number");
	scanf("%d",&n);
	//factorial block start
	for(i=1;i<=n;i++)
	{
	f=f*i;
	}
	printf("factorial value %d",f);
	//factorial block ends
	getch();
}