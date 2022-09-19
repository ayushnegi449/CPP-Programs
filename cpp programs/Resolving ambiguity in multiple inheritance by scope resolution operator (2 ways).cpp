/*Resolving ambiguity in multiple inheritance by scope resolution operator (2 ways)
Method2 : Nesting*/

#include <iostream>
using namespace std;
class A
{
	public:
		void output()
			{
		    	cout<<"Class A invoked!\n";
			}
};


class B
{
	public:
		void output()
			{
		    	cout<<"Class B invoked!!\n";
			}
};


class C : public A, public B
{
	public:
		void output()
			{
				A::output();
				B::output();
				cout<<"Class C invoked!!!\n";
			}
};

int main()
{
C c;
c.output();
return 0;
}
