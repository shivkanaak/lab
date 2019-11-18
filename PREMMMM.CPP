#include<iostream.h>
#include<string.h>
#include<conio.h>
class t
{
	char *name;
	public:
	t()
	{
		name=new char[strlen("unnamed")+1];
		strcpy(name,"unnamed");
		cout<<"unnamed obj created";
	}
	t(char*nm)
	{
		name=new char[strlen(nm)+1];
		strcpy(name,nm);
		cout<<name,"object created";
	}
	~t()
	{
		cout<<name<<"object destroyed"<<endl;
		delete name;
	}
};
	t obj("global");
	void sum()
	{
		t obj1 ("add");
		cout<<"function called"<<endl;
	}
	void main()
	{
		clrscr();
		t obj;
		cout<<"main function"<<endl;
		sum();
		getch();
	}

