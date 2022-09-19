//Use objects of one namespace and then those of another one by splitting the code in different blocks

#include <iostream>
using namespace std;

namespace Namespace1
{
    int v1 = 23;
}
namespace Namespace2
{
    char v1 = 'A';
}

int main()
{	
	{
		using namespace Namespace1;
		cout << "From Namespace1: " << v1;
	}

	{
		using namespace Namespace2;
		cout << "\nFrom Namespace2: " << v1;
	}
	
return 0;
}

