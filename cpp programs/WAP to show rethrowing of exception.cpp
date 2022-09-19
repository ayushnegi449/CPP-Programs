// WAP to show rethrowing of exception

#include <iostream>
using namespace std;

void MyHandler()
{
	try
	{
	    throw "hello";
	}
	
    	catch (const char *)
    	
	{
    	cout << "\nCaught exception inside MyHandler\n";
    	throw; //rethrow char* out of function
	}
}
int main()
{
    cout << "Main start";
    
	try
	{
	    MyHandler();
	}
	
	catch (const char *)
	{
	    cout << "Caught exception inside Main\n";
	}
	
cout << "Main end";
return 0;
}
