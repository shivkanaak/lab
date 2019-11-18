#include<iostream.h>
#include<conio.h>
class student
{
protected:
	int roll,age;
	char name[10];

};
class ug:protected student
{
protected:
	int sem,fees,stipend;
public:
	void read()
	{
		cin>>roll;
		cin>>name;
		cin>>age;
	}
	void ugread()
	{
		cin>>sem;
		cin>>fees;
		cin>>stipend;
	}

	void show()
	{
		cout<<" \n roll "<<roll;
		cout<<"\n name "<<name;
		cout<<"\n age "<<age;
		cout<<"\n ug sem "<<sem;
		cout<<"\n ug fees "<<fees;
		cout<<"\n ug stipend "<<stipend;
	}
};
class pg:protected ug
{
public:
	void pgread()
	{
		cin>>sem;
		cin>>fees;
		cin>>stipend;
	}

	void pshow()
	{

		cout<<"\n pg sem "<<sem;
		cout<<"\n pg fees "<<fees;
		cout<<"\n pg stipend "<<stipend;
	}
};
void main()
{
	clrscr();
	student s;
	ug u;
	pg p;
	for(int i=0;i<5;i++)
	{
	u.read();
	u.ugread();
	p.pgread();
	}
	for(int j=0;j<5;j++)
	{
	u.show();
	p.pshow();
	}
	getch();
}