#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)

			if(i+j>=5)
			{
			printf("*");

			}
		 else
		{
			printf(" ")
		}

		printf("\n");
	}
	getch();
}


