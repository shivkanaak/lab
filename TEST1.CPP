#include<iostream.h>
#include<conio.h>
class test
{
static int c;
int x;
public:
void set()
{
x=0;
c++;

}
void show()
{
cout<<x<<","<<c<<"\n";
}
};
int test::c=0;

void main()
{
clrscr();
test obj;
obj.show();
obj.set();
obj.show();
test obj2;
obj2.set();
obj.show();

}





