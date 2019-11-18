#include<iostream.h>
#include<conio.h>
class student
{
	int rno;
	int marks;
public:
	student()
	{
		cout<<"Enter roll n.o: ";
		cin>>rno;
		cout<<"Enter marks: ";
		cin>>marks;
	}
	student(int r, int m)
	{
		rno=r;
		marks=m;
	}
	void show()
	{
		cout<<"Roml/ ./ll n.o: "<<rno<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
	student(student &s)
	{
		rno=s.rno;
		marks=s.marks;
	}
};
void main()
{
	clrscr();
	student s1;
	student s2(2,100);
	student s3(s2);
	student s4(s1);
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	getch();
}