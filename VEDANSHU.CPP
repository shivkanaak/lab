// this is sigle line comment
/* this is lmulti line comment
we can use to persantage code*/


#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,persantage;                           /* data type variable*/
 clrscr();                               /*to clear screen*/
 printf("enter a num\n");               /*print a string*/
 scanf("%d%d",&a,&b);                  /* user given a value*/
 c=a/b;                                /*syntax expression*/
 persantage=a%b;

			  /* print a value c */
printf("c=%d:",c);                   /*print a value r persantagea*/
printf("persantage=%d:",persantage);
				    /* to  hold screen*/
getch();
}