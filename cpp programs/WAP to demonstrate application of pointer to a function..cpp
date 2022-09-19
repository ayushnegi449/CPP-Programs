//WAP to demonstrate application of pointer to a function.
#include <iostream>
using namespace std;

int add(int x , int y)
	{
	    return x+y;
	}

int main()
	{
		 int (*funcptr)(int,int);  
		 funcptr=add;
		
		 int sum=funcptr(23,310);
		 cout<<"sum = "<<sum;
		 return 0;
	}
