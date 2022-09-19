//Demonstrate accessing namespace variables with scope resolution operator using declarative

#include <iostream>
using namespace std;

namespace Namespace1
{
	int v1 = 11;
	int v2 = 44;
}

namespace Namespace2
{
	char v1 = 'X';
	char v2 = 'Y';
}

int main()
{
using Namespace1::v1;
using Namespace2::v2;
cout << "Using Declarative"<< "\nNamespace1 v1 :\t" << v1 << "\nNamespace2 v2 :\t" << v2;
cout << "\n\nUsing Scope Resolution"<< "\nNamespace1 v2 :\t" << Namespace1::v2 << "\nNamespace2 v1 :\t" <<Namespace2::v1;
return 0;
}

