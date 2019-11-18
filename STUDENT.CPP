
#include<iostream.h>
#include<conio.h>
class student
{
  int rno;
  int marks;
  pubilc:
  student()
  {
	 cout<<"enter rno";
	 cin>>rno;
	 cout<<"marks";
	 cin>>"marks";
  }
  student(int r,int m)
  {
	 rno=r;
	 marks=m;
  }
  void show()
  {
	cout<<"roll no"<<rno;
	cout<<"marks"<<marks;
  }
  student(student &s);
  {
	rno=s. rno;
	marks=s. marks;
  }
  };
  void main()
  {
	clrscr();
	 student s1;
	 student s2 (2,100);
	 student s3(s1);
	 s1.show();
	 s2.show();
	 s3.show();
	 getch();
  }







