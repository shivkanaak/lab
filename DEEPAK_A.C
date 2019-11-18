uuj   ju b u u buburgvbrgvb e3wgt3f 3te3e33e //deepak yogi
/*a program of sum of element using the array */

#include<stdio.h>
#include<conio.h>
 void main ()
{   int a[5],i,c,n;                               // int is use for take variables
		  clrscr();                     // its use for clear screen
	   printf("please enter how many number you want to add");
	   scanf("%d",&n);
       for (i=0; i<n ; i++)
	 {   printf("please enter your %d value",i+1);
	     scanf("%d",&a[i]);
	 }

	 c=a[0]+a[1]+a[2]+a[3]+a[4];
	 printf("%d",c);

    getch();

}