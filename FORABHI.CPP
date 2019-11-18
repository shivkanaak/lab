#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,c;
clrscr();
printf ("enter the value of a");
scanf ("%d",&a);
for (i=1;i<=10;i++)
{
c=a*i;
printf ("%d\n",c);
}
getch ();
}

