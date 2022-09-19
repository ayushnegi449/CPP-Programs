//Demonstrate ++ operator overloading (return type of function being Index class)

#include<bits/stdc++.h>
using namespace std;
class Index
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
			
		Index operator++()
			{
		    	val++;
		    	return *this;
			}
};

int main()
{
Index i1;
cout << "Initial value of val in object: " << i1.get_index();
++i1;
cout << "\nValue of val in object after using operator:" << i1.get_index();
return 0;
}

