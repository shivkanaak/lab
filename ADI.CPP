//harsh tamoli
#include<stdio.h>
#include<conio.h>
void main()
{

		clrscr();
     int i,a=0;
   char name[10];
      printf("please enter your name\n") ;
      scanf("%s",name);


	for (i=0; name[i] != '\0'; i++)
	 {

	      a++;
	 }
	 printf("the lenght of the enter word=%d",a);
	   getch();

}