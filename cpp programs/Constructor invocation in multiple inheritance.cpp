//Constructor invocation in multiple inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		A()
			{
		    	cout<<"A's constructor has been invoked!\n";
		    	cout<<"Displaying A\n";
			}	
};


class B
{
	public:
		B()
			{
		    	cout<<"B's constructor has been invoked!\n";
		    	cout<<"Displaying B\n";
			}
};


class C: public A, public B
{
	public:
		C()
			{
		    	cout<<"C's constructor has been invoked!\n";
		    	cout<<"Displaying C\n";
			}
};


int main()
{
C c;
return 0;
}

