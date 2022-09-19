//Use of class in a namespace

#include <iostream>
using namespace std;

namespace ns
{
class Sample;
}

class ns::Sample
{
public:
void display()
{
cout << "Display function called...";
}
};

int main()
{
ns::Sample obj;
obj.display();
return 0;
}

