#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int roll;
	char name[25];
public:
	void read_student()
	{
		cout<<"enter roll no"
		cin>>roll;
		cout<<"enter name"
		cin>>name;
	}
	void show_student()
	{
	  cout<<"roll no"<<roll<<"name"<<name;
	}

};
class makrs:public student
{
	protected:
		int sub1,sub2,sub3;
	public:

		void read_marks()
		{
		 cout <<"enter maths marks"
		 cin>>sub1;
		 cout<<"enter  chemistry marks"
		 cin>>sub2;
		 cout<<"enter physics  marks
		 cin>>sub3;
		}
};
class calculation:public marks
{
  protected:
  int sum;

  public:
  void total_marks()
  {
	cout<<"total marks";
	sum=sub1+sub2+sub3;

	cout<<sum;
  }
  void precentage()
       {
	 int perc;
	 cout<<"the precentage will be";
	 per=sum/3;
	 cout<<perc;
       }
};
void main()
{
	clrscr();
	calculation a;
	a.read_student();
	a.show_student();
	a.read_mark();
	a.show_marks();
	a.total_marks();
	a.precentage();
	getch();
}





