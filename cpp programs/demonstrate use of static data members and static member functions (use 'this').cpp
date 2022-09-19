//demonstrate use of static data members and static member functions (use 'this')

#include<iostream>
using namespace std;

class Number
{
    int total;
    static int count;

public:

    Number() 
	{
        this->total = ++count;
    }

    void printtotal() 
	{
        cout << "\nObject number is :" <<total;
    }

    static void printcount() 
	{
        cout << "Count Objects :" << count;
    }
};

int Number::count;

int main() 
{
    Number o1, o2;

    o1.printcount();
    o1.printtotal();
    cout<<"\n\n";
    o2.printcount();
    o2.printtotal();
    return 0;
}
