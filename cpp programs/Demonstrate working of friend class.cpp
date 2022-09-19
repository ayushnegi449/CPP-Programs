//Demonstrate working of friend class

#include <iostream>
using namespace std;

class ClassB;
class ClassA
{
 int a=10;
 friend class ClassB;
};

class ClassB
{
 int b=20;
 public:
 	
  int add()
	 {
	 ClassA a1;
	 return a1.a + b;
	 }
};

int main()
	{
	 ClassB b1;
	 cout << "Sum: " << b1.add();
	 return 0;
	}

