#include<stdio.h>
#include<conio.h>

void main()
{  clrscr();
   char c[10];
   int i,j,name=0,surname=0;
   scanf("%[^\n]s",c);
   for(i=0;c[i]!='\0';i++)
   {
       if(c[i]==' ')
       {
   name++;
       }
       for(j=i;c[j]!='\0';j++)
       {
       if(c[j]>' '&&c[j]<'\0')
       {
	surname++;
       }
  }
     printf("%d",name);
     printf("%d",surname);
  }
       getch();
       }