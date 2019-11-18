#include<conio.h>
#include<iostream.h>
class student
{
	int ron;
	int marks;
	public:
	student()
	{
		cout<<"Enter ron";
		cin>>ron;
		cout<<"Enter marks";
		cin<<marks;

	}
	student(int x,int y)
	{
		ron=x;
		marks=y;
	}
	void show()
	{
	  cout<<"rno"<<rno;
	  cout<<"marks"<<marks;
	}
	student(student &s)
	{
	  rno=s1.rno;
	}
};


