#include<conio.h>
#include<iostream.h>
class student
{
	protected:
	char name[25];
	int roll_no;
	public:
		void read()
		{
			cout<<"Enter students Name: ";
			cin>>name;
			cout<<"Enter Roll N.o: ";
			cin>>roll_no;
		}
		void show()
		{
			cout<<"Name: "<<name;
			cout<<"Roll N.o: "<<roll_no;
		}
};
class exam:public student
{
	protected:
	int sub1,sub2;
	public:
		void read()
		{
			cout<<"Enter sub1 marks: ";
			cin>>sub1;
			cout<<"Enter sub2 marks: ";
			cin>>sub2;
		}
		void show()
		{
			cout<<"Sub1 marks: "<<sub1;
			cout<<"Sub2 marks: "<<sub2;
		}

};
class result:public exam
{
	protected:
	int x;
	public:
	void read()
	{
		cout<<"Enter Total: ";
		cin>>x;
	}
	void total()
	{
		x=sub1+sub2;
	}
	void show()
	{
		cout<<"sub1: "<<sub1;

		cout<<"sub2: "<<sub2;
		cout<<"Total: "<<x;
	}
};
void main()
{
	clrscr();
	result a;
	a.read();
	a.total();
	a.show();
	getch();
}