#include<iostream.h>
#include<conio.h>
class distance
{
	int feet;
	int inch;
public:
	distance();
	distance(int x,int y);
	distance distance::operator+(distance &d1);
	distance distance::operator*(distance &d1);
	distance distance::operator-(distance &d1);
	distance distance::operator/(distance &d1);
	void show();
};

distance::distance()
{
	feet=inch=0;
}

distance::distance(int f,int i)
{
	feet=f;
	inch=i;
}
distance distance::operator+(distance &d1)
{
	distance d;
	d.feet=feet+d1.feet;
	d.inch=inch+d1.inch;
	return(d);
}
distance distance::operator*(distance &d1)
{
	distance d;
	d.feet=feet*d1.feet;
	d.inch=inch*d1.inch;
	return(d);
}
distance distance::operator/(distance &d1)
{
	distance d;
	d.feet=feet/d1.feet;
	d.inch=inch/d1.inch;
	return(d);
}
distance distance::operator-(distance &d1)
{
	distance d;
	d.feet=feet-d1.feet;
	d.inch=inch-d1.inch;
	return(d);
}
void distance::show()
{
	cout<<" feet: "<<feet<<endl;
	cout<<" inch: "<<inch<<endl;
}
void main()
{
	clrscr();
	distance obj1;
	distance obj3(5,4);
	distance obj2(15,20);
	cout<<" add"<<endl<<endl;
	obj1=obj2+obj3;
	obj1.show();    cout<<endl;
	cout<<" multiplication"<<endl<<endl;
	obj1=obj2*obj3;
	obj1.show();    cout<<endl;
	cout<<" subtraction"<<endl<<endl;
	obj1=obj2-obj3;
	obj1.show();    cout<<endl;
	cout<<" dividation"<<endl<<endl;
	obj1=obj2/obj3;
	obj1.show();    cout<<endl;
	getch();
}
