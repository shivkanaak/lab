#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	char name[20];
	int roll;
	public:
	void read()
	{
		cout<<"enter name";
		cin>>name;
		cout<<"enter roll";
		cin>>roll;
	}
	void show()
	{
	cout<<name<<roll;
	}
	};
class exam: public student
{
	protected:
	int sub1;
	int sub2;
	public:
	void read()
	{
		student::read();
		cout<<"enter marks"<< endl;
		cin>>sub1>>sub2;
	 }
	 void show()
	 {           student::show();
		cout<<sub1<<sub2<<endl;
	 }
   };
class result: public exam
{
	protected:
	int sub1,sub2,tm;
	public:
	void read()
	{
		exam::read();
		cin>>sub1>>sub2;
	}
	void show()
	 {    exam::show();
	      cout<<sub1<<sub2<<tm<<endl;
	}
	void total()
	{
		tm=sub1+sub2;
	}
	};
	void main()
	{
	  clrscr();
	  result s1;
	  s1.read();
	  s1.total();
	  s1.show();
	  getch();

	}