#include<iostream.h>
#include<conio.h>
class test {
	int x;
public:
test()
{
	cout<<"enter value of x : ";
	cin>>x;
}
void show()
{
	cout<<"value of x is :"<<x;
}

};
void main()
{
	clrscr();
	test obj;
	obj.show();
}