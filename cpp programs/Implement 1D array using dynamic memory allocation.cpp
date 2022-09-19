#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Creating a Dynamic 1D Array\n";
 cout<<"Enter the size of array : ";
 cin>>n;
 
 int *array =new int[n];
 
 cout <<"Enter "<<n<<" elements : \n";
 for(int i=0; i<n; i++)
 {
 cin>>array[i];
 }
 
 cout<<"The entered array is :\n";
 
 for(int i=0; i<n-1; i++)
 {
 cout<<array[i]<<" , ";
 }
 
 cout<<array[n-1];
 delete []array;
 return 0;
}
