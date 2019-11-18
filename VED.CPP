#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,n;
	clrscr();
	printf("enter a num:");
	scanf("%d",&n);
	for(i=0;i<=4;i--)
	{
	  for(j=0;j<=4;j++)
	  {
	    if(j<i)
	    {
	    printf(" ");
	    }

	    else
	    {
	    printf("*");
	    }
	    printf("");
	    }
	    printf("\n");
	    }

	   getch();

}