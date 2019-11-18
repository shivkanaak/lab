#include<iostream.h>
#include<conio.h>
class distance
{
	int feet;
	int inch;
	public:
	distance();
	distance(int f,int i);
	distance operator *(distance &d1)
	{

		distance d;
		d.feet=feet*d1.feet;
		d.inch=inch*d1.inch;
		return(d);
	}
	void show();
};
	distance::distance()
	{
		feet=inch=0;
	}
	distance::distance(int f,int i)
	{
		feet= f;
		inch= i;
	}
	void distance::show()
	{
		cout<<feet<<endl<<inch<<endl;
	}

	void main()
	{
		clrscr();
		distance obj1;
		distance obj2(2,3);
		distance obj3(3,4);
		obj1= obj2*obj3;
		obj1.show();
		getch();
	}

