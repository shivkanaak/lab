#include<iostream.h>
#include<conio.h>

class Class
{
	private:
		int d;
	public:
		int a,b;
	void nayan()
	{
		d=3;
		cout<<"nayan value is : "<<d<<endl;
	}

	void add()
	{
		cout<<"a is : \n"<<a;
		cout<<"b is : "<<b;
		d=a+b;
	}
	void read()
	{
		cout<<"enter a: ";
		cin>>a;
		cout<<"enter b: ";
		cin>>b;
	}
	void show()
	{
		cout<<"result is : "<<d;
	}
	void ss()
	{
		cout<<"a is : \n"<<a;
		cout<<"b is : "<<b;
	}

};
void main()
{
	clrscr();
	Class a;
	a.nayan();
	a.add();
	a.read();
	a.show();
	for(int i=0;i<2;i++)
	{
		a.ss();
	}
}