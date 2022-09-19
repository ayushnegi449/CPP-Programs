//Write a program that uses a function to swap two integers. Use call by reference in C style.
#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
 int temp;
 temp= *x;
 *x=*y;
 *y=temp;
}


int main()
{
 int m,n;
 cout<<"Enter the value of m: ";
 cin>>m;
 cout<<"Enter the value of n: ";
 cin>>n;
 cout<<"Entered Values are :\n";
 cout<<"m: "<<m;
 cout<<"\nn: "<<n;
 
 swap(&m,&n);
 
 cout<<"\n\nValues after swapping m and n are: \n";
 cout<<"m: "<<m;
 cout<<"\nn: "<<n;
 return 0;
}



