//Demonstrate that we can define methods outside namespace

#include<iostream>
using namespace std;

namespace ns
{
void display();
class sample
{
public:
    void display();
};
}

void ns::sample::display()
{ 
cout << "\nns :: sample :: display()"; 
}
void ns::display()
{ 
cout << "ns :: display()"; 
}

int main()
{
ns::sample obj;
ns::display();
obj.display();
return 0;
}

