#include<iostream.h>
#include<conio.h>
class a
{
	public:
       a()
	{
		cout<<"a default";
	}
       a(int s)
	{
	 cout<<"a parameter";
	}
};
	class b
	{
	public:
	 b() {
		cout<<"b default";
		}
	 b(int x)
	 {
	 cout<<"b parameter";
	 }
	};
	class d1: public a, public b
	{ public:
	d1()
	{
	cout<<"d1 default";
	}
	d1(int z):a(z),b(z)
	{
		cout<<"d1 perameter";
	}
	};
	void main()
     {
	clrscr() ;
       //b obj;
	//b obj1(3);

	d1 obj2(3);
	getch();
      }