#include<stdio.h>
#include<conio.h>
void main()
{     char fullname[30],rev[30];
      int j,i,count=0;

      clrscr();

      printf("please enter your name : ");
      scanf("%[^\n]s",fullname);

      for(i=0; fullname[i] !='\0';i++)
      {
		count++;
      }
                                    
      for(i=0,j=count-1; j>=0; i++,j--)
      {
		rev[i] = fullname[j];
      }
      rev[i] = '\0';
      printf("%s",rev);

      getch();
}


