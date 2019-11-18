 #include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	int a;
	printf("write your marks");
	scanf("%d",&a);
	if(a>50);
	{	if(a>50&&a<60)
	       {
			printf("second division pass");
	       }
	       if(a>60&&a<100)
	       {
			printf("pass with first division");
	       }
	}
	if(a<50)
	{
		printf("fail...");
	}
	getch();
}


