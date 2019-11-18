//deepak yogi
#include<stdio.h>
#include<conio.h>
void main()
{

		clrscr();               // for clear the screen
     int i,a=0;
   char name[10];
      printf("please enter your name\n") ;  // for print the question
      scanf("%s",name);                    // for take the answer from user


	for (i=0; name[i]!=0; i++)
	 {

	      a++;
	 }
	 printf("the lenght of the enter word=%d",a);      // for print the lenght of the charactor
	   getch();

}