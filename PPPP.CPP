#include<iostream.h>
#include<conio.h>
class bank

{
	int acc;
	int bal;
	public:
		bank()
		{
			cout<<"enter acc_no"<<endl;
			cin>>acc;
			cout<<"enter balance"<<endl;
			cin>>bal;
		}
		void deposit()
		{
			int x;
			cout<<"enter amount"<<endl;
			cin>>x;
			bal=bal+x;
		}
		void show()
		{
			cout<<"acc_no"<<acc<<endl;
			cout<<"balance"<<bal<<endl;
		}

};
void main()
{
	clrscr();
	bank a;
	a.deposit();
	a.show();
	getch();
}