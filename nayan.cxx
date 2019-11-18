#include<iostream.h>
class Class 
{
private:
int d;
void nayan()
{
d=3;
cout<<"nayan value is : "<<d;
}
public:
 int a,b;
void add()
{
d=a+b;
}
void read()
{
cout<<"enter a: ";
cin>>a;
cout<<"enter b: ";
cin>>b;
}
void show()
{
cout<<"result is : "<<d;
}

};
void main()
{
Class a;
a.nayan();
a.add(); 
a.show();

}