#include<iostream.h>
#include<conio.h>
class a
{

	public:
	int a;
	void input()
	{
	cout<<"enter a";
	cin>>a;
	}
};
class b: public a
{
	public:
	int b;
	void input()
	{
	cout<<" enter b :";
	cin>>b;

	}
	void sum();
};
void b :: sum()
{
	int c=0;
	c=a+b;
	cout<<"sum is "<<c;
}

void main()
{
	clrscr();
	a a1;
	a1.input();
	b b1;
	b1.input();
	b1.sum();

}