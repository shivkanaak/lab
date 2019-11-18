#include<iostream.h>
#include<conio.h>
#include<string.h>
class comp
 {

	char s[40];
	public:
	comp();
	comp(char *p);
	void show();
	comp operator < (comp str1);
	comp operator >(comp str2);
 };
 comp::comp();
 {
	S[0]='\0';
 }
 comp::comp(char *p);
 {
	strcpy(s,*p);
 }
 void show ();
 {
