//Write a function that returns by reference. The function should compare two integers. Main() function should store 0 in the integer location that has larger number.
#include<iostream>
using namespace std;

int &large(int &x,int &y)
{
 if(x>y)
 return x;
 else 
 return y;
}

int main()
{
 int m,n;
 cout<<"Enter the value of m: ";
 cin>>m;
 cout<<"Enter the value of n: ";
 cin>>n;
 cout<<"\nInitial Value of m: "<<m;
 cout<<"\nInitial Value of n: "<<n;
 
 cout<<"\n\nNow the larger value will become 0 i.e. "<<(m>n?'m':'n');
 large(m,n)=0;
 cout<<"\nFinal Value of m: "<<m;
 cout<<"\nFinal Value of n: "<<n;
 return 0;
}

