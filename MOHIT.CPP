#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("enter your number");
	scanf("%d",&n);

	 for(i=0;i<=4;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(j>=(n+1)-i)
			{
			printf("*");
			}
			else
			{
			printf(" ");
			}
		}       printf("\n");
	}
{
       for(i=0;i<=3;i++)
	{    for(j=n/2;j<=n;j++)
			if(i>=j)
			{
			printf("#");
			}
			else
			{
			printf(" ");
			}
		}
}               printf("\n");
	getch();
}


