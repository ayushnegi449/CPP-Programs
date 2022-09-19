#include <iostream>
using namespace std;

class Shape
{
	protected:
	int l, b;
	public:
	virtual void get_area() = 0;
};

class rectangle : public Shape
{
	int Area;
	public:
		void input()
			{
				cout << "Enter length of rectangle: ";
				cin >> l;
				cout << "Enter breadth of rectangle: ";
				cin >> b;
			}
			
		void get_area()
			{
		    	Area = l*b;
			}
			
		void output()
			{
		    	cout << "Area of rectange : " << Area;
			}
};

int main()
{

rectangle r;
r.input();
r.get_area();
r.output();
return 0;
}

