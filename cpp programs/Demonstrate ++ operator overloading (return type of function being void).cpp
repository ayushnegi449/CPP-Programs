//Demonstrate ++ operator overloading (return type of function being void)

#include <iostream>
using namespace std;

class index
{
	int val;
	public:
		index()
			{
		    	val = 0;
			}
			
		int get_index()
			{
			    return val;
			}
			
		void operator++()
			{
			     val++;
			}
};


int main()
{
	
	index i1, i2;
	cout << "Initial value of val in i1: " << i1.get_index();
	++i1;
	cout << "\nValue of val in i1 after using operator: " << i1.get_index();
	
	cout << "\n\nInitial value of val in i2: " << i2.get_index();
	++i2;
	cout << "\nValue of val in i2 after using operator: " << i2.get_index();

return 0;
}






























