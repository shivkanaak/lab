#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=0; i<=4; i++)
	{
	  for(j=0; j<=4; j++)

	      {
		if(j<=i)
		   printf("*");
	      }

		   printf("\n");
	 }
	   getch();

}