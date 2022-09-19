//Demonstrate Dynamic Constructor

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

class dyn_constr
{
char *name;
int length;

public:
	dyn_constr()
		{
		length = 0;
		name = new char[length + 1];
		}
	
	dyn_constr(char *s)
		{
			length = strlen(s);
			name = new char[length + 1];
			strcpy(name, s);
		}
	
	void concatenate(dyn_constr &x, dyn_constr &y)
		{
			length = x.length + y.length;
			delete name;
			name = new char[length + 1];
			
			strcpy(name, x.name);
			strcat(name, y.name);
		}
	
	void output()
		{
			cout << name ;
			cout << "\nLength of the String : " << strlen(name)<<"\n";
		}
};

int main()
{

char *c= "Demonstrate ";
dyn_constr name1(c);
dyn_constr name2("Dynamic ");
dyn_constr name3("Constructor ");

dyn_constr s1, s2;
s1.concatenate(name1, name2);
s2.concatenate(s1, name3);

name1.output();
cout<<"\n";
name2.output();
cout<<"\n";
name3.output();
cout<<"\n";

s1.output();
cout<<"\n";
s2.output();
return 0;
}
