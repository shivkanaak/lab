#include<stdio.h>
#include<conio.h>

void main()
{

 char s[10];
 int i,count=0;
 clrscr();
 printf("enter any string:");
 scanf("%[^\n]s ",&s);

for(i=0; s[i]!='\0'; i++)

 {
  count++;
  }
  printf("length of string is %d",count);
  getch();

}