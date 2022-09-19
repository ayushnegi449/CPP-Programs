//Demonstrate the use of initialization section and assignment section in constructor in the scenario  of multiple inheritance

#include<iostream>
using namespace std;
class X
{
	int x;
	public:
		
	X(int a)
		{
	     	x=a;
		}
	void show_X()
		{
	     	cout<<"Value of x = "<<x<<"\n";
	    }
};

class Y
{
	
	int y;
	public:
		
		Y(int b)
			{
		    	y=b;
			}
	void show_Y()
		{
		     cout<<"Value of y = "<<y<<"\n";
	    }
};

class Z: public X, public Y
{
	int z;
	public:
		Z(int u,int v) : X(u),Y(v)
			{
		     	z=u+v;
			}
	void show_Z()
		{
		    cout<<"Value of z = "<<z<<"\n";
		}
};

int main()
{
Z obj(20,40);
cout<<"Displaying values\n";
obj.show_X();
obj.show_Y();
obj.show_Z();
return 0;
}
