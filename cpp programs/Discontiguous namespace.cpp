//Discontiguous namespace

#include <iostream>
using namespace std;

namespace NS
{
int x;
}

namespace NS
{
int y;
}

int main()
{
NS ::x = NS ::y = 100;
cout << "--Using scope resolution operator NS :: x * NS :: y--\n";
cout << NS ::x * NS ::y;
cout << "\n\n--Using namespace directive x * y--\n";
using namespace NS;
cout << x * y;
return 0;
}
