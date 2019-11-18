#include<stdio.h>
#include<conio.h>
void main()
{
   char name[20];
   int length=0,i;
   clrscr();
   printf("enter a name\n");
   scanf("%s",name);
   printf("the name is %s\n",name);
   for(i=0;name[i]!='\0';i++)
  {
   length++;
  }

      printf("%d",length);


   getch();
  }