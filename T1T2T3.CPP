#include<iostream.h>
#include<conio.h>
class time
{
	int h,m,s;
	public:
		time()
		{
			h=m=s=0;
		}
		time (int hr,int nm,int se)
		{
			h=hr;
			m=nm;
			s=0;
		}
		time (int hr,int nm,int se)
		{
			h=hr;
			m=nm;
			s=se;
		}
		void show()
		{
			cout<<"hr"<<h<<endl;
			cout<<"nm"<<m<<endl;
			cout<<"se"<<s<<endl;
		}
		void time::add(time &t1,time &t2);
};
		void time::add(time &t1,time &t2)
		{
			h=t1.h+t2.h;
			m=t1.m+t2.m;
			s=t1.s+t2.s;
		}

		void main()
		{
			clrscr();
			time.t1();
			time.t2(2,3);
			time.t3(2,3,4)
			t1.add(t2,t3);
			t1.show();
			getch();

		}