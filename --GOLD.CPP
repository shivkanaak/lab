#include<iostream.h>
#include<conio.h>
class Silver;
class Gold
{
     int q;
     public:
     void read()
     {
	cout<<"Enter quantity: "; cin>>q;
     }
     friend int add(Gold d1,Silver d2);
};

class Silver
{
     int q;
public:
void read()
{
	cout<<"Enter quantity: "; cin>>q;
}
friend int add(Gold d1,Silver d2);
};

int add(Gold d1,Silver d2)
{
	int total;
	total=d1.q+d2.q;
	return(total);
}
void main()
{
	Gold d1; Silver d2;
	clrscr();
	d1.read();
	d2.read();
	cout<<add(d1,d2);
	getch();
}

