/* that program of print the runnable pattern program
       *
      **
     ***
    ****
   *****
   this program coded by deepak kumar
   program no. 09
*/

#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
  int i,j,k;
  for(i=1;i<=5;i++)
  {
   for(j=i;j<=5;j++)
   {
    printf(" ");
   }
   for(k=1;k<=i;k++)
   {
    printf("*");
   }
  printf("\n");
  }
 getch();
}