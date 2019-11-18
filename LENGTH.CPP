#include<stdio.h>
#include<conio.h>
void main()
{
 char x[20];
 clrscr();
 int i,length=0;
 printf("enter your string:");
 scanf("%[^\n]s",x);
 for(i=0;x[i]!='\0';i++)
 {
   if(x[i]==' ')
   {
      printf("%d",i);
   }

 }
 getch();

}