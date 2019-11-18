#include<iostream.h>

class bank
{
	int acc;
	float bal;
public:
	void read()
{
	cout<<"enter acc no";
	cin>>acc;
	cout<<endl<<"enter bal ";
	cin>>bal;
}

void show()
{
	cout<<endl<<"acc no : "<<acc;
	cout<<"bal : "<<bal;
}

};
void main()
{
	bank obj;
	obj.read();
	obj.show();

}