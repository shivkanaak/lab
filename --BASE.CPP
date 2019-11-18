#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	protected:

		int roll;
		char name[25];
	public:

		void sread()
		{
			cout<<"Enter roll n.o of student "<<":"<<endl;
			cin>>roll;
			cout<<"Enter Name of student"<<":"<<endl;
			cin>>name;
		}

};
class marks : public student
{
	protected:
		int sub1,sub2,sub3;

	public:
		void mread()
		{
			cout<<"Enter marks of "<<" student"<<endl;
			cout<<"Enter marks of Physics: "<<endl;
			cin>>sub1;
			cout<<"Enter marks of Chemistry: "<<endl;
			cin>>sub2;
			cout<<"Enter marks of Maths: "<<endl;
			cin>>sub3;
		}
		void show()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll n.o: "<<roll<<endl;
			cout<<"Physics: "<<sub1<<"/100"<<endl;
			cout<<"Chemistry: "<<sub2<<"/100"<<endl;
			cout<<"Maths: "<<sub3<<"/100"<<endl;

		}
};
class calc:public marks
{
	int total_marks;
	int percent;
	void total()
	{
		total_marks = sub1+sub2+sub3;
		cout<<"Total Marks: "<<total_marks;
	}
	void percentage()
	{
		percent=total_marks*100/300;
		cout<<"Percentage: "<<percent;
	}
};
void main()
{
	clrscr();
	calc a,b;
	a.sread();
	a.mread();
	b.sread();
	b.mread();
	a.show(); b.show();
	a.total();
	a.percentage();
	getch();
}