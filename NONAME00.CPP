#include<iostream.h>
#include<conio.h>
class silver;
class gold

{
	int quantity;
	clrscr();
	public:

		void read()
		{
		cout <<"enter quantity";
		cin>>quantity;
		}
		friend int add(gold &d1,silver &d2);
		};
			class silver
			{
			int quantity;
			public:
			 void read()
			 {
				cout<<"enter quantity";
				cin>>quantity;
				}

		       friend	int add( gold  &d1, silver &d2);
			};
			int add(gold &d1,silver &d2)
			{
			int total;
			total=d1.quantity+d2.quantity;
			return(total);
			};

				 void main()
				 {
				 gold d1;
				 silver d2;
				 d1.read();
				 d2.read();
				 cout<<add(d1,d2);
				 getch();
				 };
