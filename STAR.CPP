#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	for(a=1;a<=5;a++)
		{
		for(b=5;b>=1;b--)
			{
				if(a>=b)
					{
						printf("%d",b);
					}
				else
					{
						printf(" ");
					}
			}
		printf("\n");
		}
	getch();
}



