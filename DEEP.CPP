//deepak yogi
#include<stdio.h>
#include<conio.h>
void main()
{

		clrscr();               // for clear the screen
     int i,j,count;
   char name[10],rev[10];
      printf("please enter your name\n") ;  // for print the question
      scanf("%s",name);                    // for take the answer from user


	for (i=0,j=count; j>=0; i++,j--)
	{
	   rev[i]=name[j];

	} printf("your reverse name is =%s",rev);
	   getch();

}