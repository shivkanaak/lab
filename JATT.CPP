#include<iostream.h>
#include<conio.h>
class student
{
	int rollno;
	char name[15];
	public:
	void read()
	{
		cout<<"enter rollno"<<endl;
		cin>>rollno;
		cout<<"enter name"<<endl;
		cin>>name;
	}
	void show()
	{
		cout<<"rollno"<<rollno<<endl;
		cout<<"name"<<name<<endl;
	}
};
void main()
{
	clrscr();
	int i;
	student s[10];
	for(i=0;i<10;i++)
	{
		s[i].read();
	}
	for(i=0;i<10;i++)
	{
		s[10].show();
	}
	getch();
}