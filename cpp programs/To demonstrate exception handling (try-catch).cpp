//To demonstrate exception handling (try-catch)

#include<iostream>
using namespace std;

int main()
{

int x,y;
char a;
do
{
cout<<"Enter numerator: ";
cin>>x;
cout<<"Enter denominator: ";
cin>>y;
try
{
if(y==0)
throw y;
else
cout<<x<<" / "<<y<<" = "<<x/y;
}
catch(int y)
{
cout<<"\nCannot be divided by zero!";
}
cout<<"\n\nWould you like to run the program again? Y/N ";
cin>>a;
cout<<"\n\n";
} 
while(a=='y'||a=='Y');
return 0; 
}

