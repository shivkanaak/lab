#include<stdio.h>
#include<conio.h>

void main()
{
   clrscr();
   char a[50];
   scanf("%[^'\n']s",a);
   printf("%s",a);
   getch();
}