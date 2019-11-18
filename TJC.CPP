#include<stdio.h>
#include<conio.h>

 void main()
 {

  int i,j,k,l,n;
  clrscr();
  printf("enter a num:");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
   for(j=i;j<n-i-1;j++)
   {
    printf(" ");
    }
    for(k=i;k<=i;k++)
    {
     printf("%d",k+1);
     }
     for(l=i-1;l>=0;l--)
     {
     printf("%d",l+1);
     }
      printf("\n");
      }
      getch();
      }
