#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,c;
clrscr ();
printf ("enter the value of a");
scanf ("%d",&a);
i=1;
while (i<=10)
	{
	  c=a*i;
	  printf ("%d\n",c);
	  i++;
	}
getch ();
}