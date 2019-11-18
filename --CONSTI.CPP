#include<iostream.h>
#include<conio.h>
class a
{

	public:
	a()
	{
		cout<<"default a";
	}
	a(int y)
	{
		cout<<"\nparameter a = "<<y;
	}
};
class b:public a
{

	public:
	b()
	{
		cout<<"\n default b";
	}
	b(int y)
	{
		cout<<"\nparameter b = "<<y;
	}
};

void main()
{
	clrscr();
	b obj;
	getch();
}

