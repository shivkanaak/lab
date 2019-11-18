#include<iostream.h>
#include<conio.h>
#include<string.h>
enum boolean{FALSE,TRUE};
class comparison
{
	char s[40];
	public:
	comparison();
	comparison(char *p);
	void show();
	boolean operator< (comparison str);
	boolean operator> (comparison str);

};
comparison::comparison()
{
	s[0]='\0';
}
comparison::comparison(char*p)
{
	strcpy(s,p);
}
boolean comparison::operator < (comparison str)
{
	if(strcmp(s,str.s)<0)
	{
		return(TRUE);
	}
	else
	{
		return (FALSE);
	}
}
boolean comparison::operator>(comparison str)
{
	if(strcmp(s,str.s)>0)
	{
		return(TRUE);
	}
	else
	{
		return (FALSE);
	}
}

void main()
{
	comparison obj1("pod");
	comparison obj2("poddar");
	if(obj1<obj2)
	{
		cout<<"obj1 is smaller";
	}
	else
	{
		if(obj1>obj2)
		{
			cout<<"obj1 is greater";
		}
		else
		{
			cout<<"equal";
		}
	}
}