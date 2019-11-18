#include<stdio.h>
#include<conio.h>

void main()
{  clrscr();
   int a[50],b[50],c[50],d[50],i;
   printf("enter the values in first array\n");
   for(i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
	     printf("enter the values in second array\n");
   for(i=0;i<5;i++)
   {
      scanf("%d",&b[i]);
   }
   for(i=0;i<5;i++)
   {
      c[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
       d[i]=b[i];
    }

    for(i=0;i<5;i++)
    {
    a[i]=d[i];
    }

    for(i=0;i<5;i++)
    {
       b[i]=c[i];
       }
	 printf("display the array1\n");

    for(i=0;i<5;i++)
    {
      printf("%d\n",a[i]);
      }

	   printf("display the array2\n");
      for(i=0;i<5;i++)
      {
	 printf("%d\n",b[i]);
       }
       getch();
       }
