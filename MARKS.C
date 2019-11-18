// this is sigle line comment
/* this is multi line comment
we  can use to explain code */
#include<stdio.h>
#include<conio.h>
    void main()
 {
  int marks;                            // declaration variable
    clrscr();                            // to clear screen
    printf("enter a number \n");     // print a string
    scanf("%d",&marks);		  // input gives

     if(marks>80&&marks>=100)
    {
    printf("congrate! grate A");
    }
      else if(marks>60&&marks>=80)
	  {
	   printf("congrate! grate B+");
	  }
	     else if(marks>40&&marks>=60)
	    {
	    printf("congrate! grate C+");
	    }
	     else if(marks>30&&marks>=40)
	     {
	     printf("congrate you pass");
	     }
	     else
	     {
	     printf("sorry fail");
	     }
	     getch();
 }