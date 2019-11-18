#include<stdio.h>
#include<conio.h>
  void main ()
 {
       int num,rem,b=0,i=1;
     clrscr();
       printf("enter your value for find binary" );
      scanf("%d",&num);
       while(num!=0)
	{ rem=num%2;
	  num=num/2;
	  b=b+(rem*i);
	 i=i*10;


	} printf("%d",b);

    getch();
 }