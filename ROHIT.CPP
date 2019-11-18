#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
for(a=5;a>=1;a--)
{
for(b=1;b<=5;b++)
{
if(b>=a)
{
printf("*");
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
