#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,c;
clrscr();
printf ("enter the value of a");
scanf ("%d",&a);
i=1;
do
{
c=a*i;
printf ("%d\n",c);
i++;
}
while (i<=10);
getch ();
}