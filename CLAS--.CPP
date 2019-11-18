#include<iostream.h>
#include<conio.h>
class b
{
	public:
		b(int s)
		{
			cout<<"(x";
		}
};
class c
{
	public:
		c(int s)
		{
			cout<<"+y";
		}
};
class d:public b, public c
{
	public:
		d(int s):c(s),b(s)
		{
			cout<<"+z)^"<<s;
		}
};
void main()
{
	clrscr();
	d obj(2);
	getch();
}
