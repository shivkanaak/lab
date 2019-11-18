/* that program of print the runnable pattern program
   *****
   ****
   ***
   **
   *
   this program coded by deepak kumar
   program no. 08
*/

#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
  int i,j;
  for(i=1;i<=5;i++)
  {
   for(j=i;j<=5;j++)
   {
    printf("*");
   }
   printf("\n");
  }
 getch();
}