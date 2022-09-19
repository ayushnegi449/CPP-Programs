//Use of Scope Resolution Operator
#include<iostream>

using namespace std;
int a=100;
int main()
{
 int a=200;
 {
 	int a =300 ;
 	cout <<"Value of a(local) is: "<<a;
 	cout <<"\nValue of a(global) is: "<<::a<<"\n";
 }
 cout <<"\nValue of a(local) is: "<<a;
 cout <<"\nValue of a(global) is: "<<::a;
  
return 0;
}
