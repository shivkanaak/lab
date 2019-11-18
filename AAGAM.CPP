#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
       for(i=4;i>=1;i--)
{
	for(j=1;j<=4;j++)
{
	if(i>=j)
{
	printf("*");
	}


}
	printf("\n");
}
for(i=1;i<=4;i++)
{

for(j=1;j<=4;j++)
{
if(j<=i)

printf("*");
	}

printf("\n");
}
getch();
}



