#include<iostream.h>
#include<conio.h>

class student
{
       protected:
	int roll;
	char name[20];
	public:
	void read()
	{
	cout<<"enter roll \n";
	cin>>roll;
	cout<<"enter name \n";
	cin>>name;
	}
};
class marks : public student
{     protected:
      int   sub1,sub2,sub3;
      public:
      void mread()
      {
	cout<<" marks : ";
	cin>>sub1;
	cout<<"enter marks ";
	cin>>sub2;
	cout<<"enter last subject marks ";
	cin>>sub3;
      }

};
class calc : public marks
{
	public:
	int total;

	void total_marks()
	{
		total=sub1+sub2+sub3;
	}

	void percentage ()
	{
		float per;
		per=total*100/300;
		cout<<"\npercentage= "<<per;
	}

};
void main()
{
clrscr();
calc c;
c.read();
c.mread();
c.total_marks();
c.percentage();
}
