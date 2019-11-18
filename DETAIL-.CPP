#include<iostream.h>
#include<conio.h>
#include<string.h>
class detail
{
	char fname[15];
	char lname[15];
	char mname[15];
public:
	detail();
	detail(char *fn);
	detail(char *fn, char *mn);
	detail(char *fn, char *mn, char *ln);
	void show();
};
detail::detail()
{
	fname[0]='\0';
	mname[0]='\0';
	lname[0]='\0';
}
detail::detail(char *fn)
{
	strcpy(fname,fn);
	mname[0]='\0';
	lname[0]='\0';
}
detail::detail(char *fn, char *mn)
{
	strcpy(fname, fn);
	strcpy(mname, mn);
	lname[0]='\0';
}
detail::detail(char *fn, char *mn, char *ln)
{
	strcpy(fname, fn);
	strcpy(mname, mn);
	strcpy(lname, ln);
}
void detail::show()
{
	cout<<fname<<endl;
	if(mname[0])
	{
		cout<<mname;
	}
	if(lname[0])
	{
		cout<<lname;
	}
}
void main()
{
	clrscr();
	detail d1("abc");
	detail d2("abc", "abb");
	detail d3("abc", "acc");
	d1.show();
	cou}