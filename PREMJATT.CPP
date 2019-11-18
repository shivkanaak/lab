#include<iostream.h>
#include<conio.h>
class bank
{
	int acc_no;
	int balance;
	public:
	void show();
	void deposit();
	void withdraw();
	void transfer(bank &a);
};
	bank()
	{
		cout<<"enter a acc";
		cin>>acc_no;
		cout<<"enter a balance";
		cin>>balance;
	}
	void bank::deposit()
	{
		int x;
		cout<<"enter add to amount"<<endl;
		cin>>x;
		balance=balance+x;
	}
	void bank::withdraw()
	{
		int w;
		cout<<"enter a amount deposit to withdraw"<<endl;
		cin>>w;
		balance=balance-w;
	}
	void bank::transfer(bank &a)
	{
		int t;
		cout<<"enter a amount withdraw to transfer"<<endl;
		cin>>t;
		balance=balance-t;
		a.balance=a.balance+t;
	}
	void bank::show()
	{
		cout<<acc_no<<endl<<balance;
	}
void main()
{
	clrscr();
	bank a,b;
	a.show();
	a.deposit();
	a.show();
	a.withdraw();
	a.show();
	a.transfer(b);
	a.show();
	b.show();
	getch();

}
