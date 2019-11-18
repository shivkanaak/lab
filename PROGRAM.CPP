#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
float d;
printf("enter marks SUBJ 1 :\n ");
scanf("%d",&a);
printf("enter marks SUBJ 2 :\n ");
cin>>b;
printf("enter marks SUBJ 3 : \n");
cin>>c;
d=a+b+c;
d=d/3;
cout<<" average marks : "<<d;

getch();
}