    // deepak yogi
 /* the programe of calculate the lenght of string */

#include<stdio.h>
#include<conio.h>
   void main()
{   clrscr();                                   // for clear screen

   int a=0 ,i;                                    // define the variables and declearation
   char name[20];                                // define the character
    printf("please enter your name \n");        // for print the massage
   scanf("%s",name);                           // for take input from the user
   printf("good morning ! %s\n",name);

   for (i=0; name[i]!='\0';  i++)
     {
	a++;


     }
     printf("the lenght of your name is = %d",a);
     getch();
}

