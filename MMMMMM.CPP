#include<iostream.h>
#include<conio.h>
class student
{
	int marks;
	public:
		student()
		{
			marks=0;
			cout<<"object1 created"<<endl;
		}
		student (int x)
		{
			marks=x;
			cout<<"object2 created"<<endl;
		}
		~student()
		{
			cout<<"object destroyed"<<endl;
		}

};
	void main()
	{
		clrscr();
		student();
		student s1();
		student s2(100);
		getch();
	}