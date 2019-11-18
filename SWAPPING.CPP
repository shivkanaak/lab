#include<stdio.h>
#include<conio.h>
void main()
{
       unsigned int a,b;
      clrscr();
      printf("please enter value of the a");
      scanf("%d",&a);
      b = ~(a);
      printf("%u",b);
      getch ();
}
