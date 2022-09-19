//ShortHand  operator overloading of +=, -= for class Complex
#include <iostream>
using namespace std;
class complex
{
	int real, img;
	public:
		complex()
		{
			real = 0;
			img = 0;
		}
	
	    complex(int r , int i)
	    {
	    	real = r;
	    	img = i;
		}
		
		void output()
		{
			cout << real << " + " << img << "i"; 
		}
		
		complex operator+=(complex op)
		{
			real = real + op.real;
			img = img + op.img;
			return *this;
		}
		
		complex operator-=(complex op)
		{
			real = real - op.real;
			img = img - op.img;
			return *this;
		}
};

int main()
{
	complex c1(4,5), c2(2,9);
	cout<<"First complex number : ";
	c1.output();
	cout<<"\nSecond complex number : ";
	c2.output();
	c2 += c1;
	cout<<"\nC2+=C1 :";
	c2.output();
	c1 -=c2;
	cout<<"\nC1-=C2 :";
	c1.output();
	return 0;
}
