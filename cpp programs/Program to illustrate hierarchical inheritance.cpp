//Program to illustrate hierarchical inheritance
#include <iostream>
using namespace std;
class A
{
	public:
		int x, y;
		void getdetails()
			{
			cout << "Enter value of x and y : \n"; 
			cin >> x >> y;
			}
};


class B : public A
	{
	public:
		void product()
			{
		    	cout << "Product = " << x * y<<"\n\n";
			}
};


class C : public A
	{
		public:
			void sum()
				{
			    	cout << "Sum= " << x + y<<"\n\n";
				}
};


int main()
{
B b ;
C c ;
b.getdetails();
b.product();
c.getdetails();
c.sum();
return 0;
}

