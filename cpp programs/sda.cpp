#include <iostream>
using namespace std;

// Base class
class Shape
{

	public:
		int length, width;
		Shape(int l, int w)
		{
			length = l;
			width = w;
		} // default constructor
		
		void get_Area()
		{
			cout << "This is call to parent class area" << endl;
			
		}


};

// Derived class
class Square : public Shape
{
public:
	
	void get_Area()
	{
		cout << "Square area: " << length * width << endl;
		
	}
};
// Derived class
class Rectangle : public Shape
{
public:
	void get_Area()
	{
		cout << "Rectangle area: " << length * width
			<< endl;
		
	}
};

int main()
{
	Square sq;
	Rectangle rec;
	

	return 0;
}

