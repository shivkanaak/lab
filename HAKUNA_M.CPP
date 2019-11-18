#include<iostream.h>
#include<conio.h>
class inc
{
int value;
public:
inc();
inc(int x);
void operator ++ ();
void show();
};
inc::inc()
{
	value=0;
}
inc::inc(int x)
{
	value=x;
}
void inc::show()
{
	cout<<value;
}
void inc::operator ++()
{
	value=value=1;
}
void main()
{
	inc obj1;
	inc obj2(45);
	obj1++;
	obj2++;
	obj1.show();
	obj2.show();
}