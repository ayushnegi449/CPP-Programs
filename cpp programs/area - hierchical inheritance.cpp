//Write a program demonstrating runtime polymorphism for hierarchical inheritance.
//Base class is Shape, to be inherited by Rectangle and Triangle classes to calculate area.
#include <iostream>
using namespace std;
class Shape
{
	public:
		int x,y;
		void get_data(int n,int m)
			{
				x= n;
				y= m;
			}
		
};
	
class Rectangle : public Shape
{
	public:
		int area_rect()
			{
				int area = x*y;
				return area;
			}

};

class Triangle : public Shape
{
	public:
	 int area_triangle()
		{
			float area = 0.5*x*y;
			return area;
		}
};

int main()
{
	
	Rectangle r;
	Triangle t;
		int length,breadth,base;
		cout << "Enter the length and breadth of a rectangle: \n";
		cin>>length>>breadth;
		r.get_data(length,breadth);
		int rect_area = r.area_rect();
		cout << "Area of the rectangle = " <<rect_area<<"\n";
		
		cout << "\n\nEnter the base and height of the triangle: \n";
		cin>>base>>length;
		t.get_data(base,length);
		float tri_area = t.area_triangle();
		cout <<"Area of the triangle = " << tri_area<<"\n";
		
		return 0;
}
