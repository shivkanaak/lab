#include<iostream.h>
#include<conio.h>
class silver;
	class gold
	{
		int q;
		public:
		void read()
		{
			cout<<"enter quantity ";
			cin>>q;
		}
	friend int add(gold d1,silver d2);
	};


class silver
{
	int q;
	public:
	void read()
		{
		cout<<"enter quantity ";
		cin>>q;
		}
		friend int add(gold d1,silver d2);

};

int add(gold d1, silver d2)
{
		int total;
		total=d1.q+d2.q;
		return(total);

}
void main()
{

	clrscr();
	gold d1;
	silver d2;
	d1.read();
	d2.read();
	cout<<add(d1,d2);

}