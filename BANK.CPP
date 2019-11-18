#include<iostream.h>
class bank
{
int acc;
float bal;
public:
int depo()
{
bal=0;
float x;
cout<<"enter deposit ";
cin>>x;
bal=x+bal;
cout<<"bal: "<<bal;
return bal;
}
int withdraw()
{
cout<<"enter withdraw amount ";
int x;
cin>>x;
bal=bal-x;
return bal;
}

/*int transfer()
{

} */

};
void main()
{
bank a;

a.depo();
a.withdraw();

}