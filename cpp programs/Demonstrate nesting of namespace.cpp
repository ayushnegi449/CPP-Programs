//Demonstrate nesting of namespace

#include <iostream>
using namespace std;

namespace ns_outer
{
int i;

namespace ns_inner
{
int j;
}

}

int main()
{
ns_outer::i = 100;
ns_outer::ns_inner::j = 10;
cout << "ns_outer::i => " << ns_outer::i << "\nns_outer::ns_inner::j => " <<ns_outer::ns_inner::j;
using namespace ns_outer;
cout << "\n\n--Using ns_outer directive-- \ni * ns_inner::j =>" << i * ns_inner::j;
return 0;
}
