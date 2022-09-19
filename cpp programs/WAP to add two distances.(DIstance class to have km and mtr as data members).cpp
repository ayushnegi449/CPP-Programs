//WAP to add two distances.(DIstance class to have km and mtr as data members)
#include<iostream>
using namespace std;

class Distance
{
 int mtr,km;
 
 public:
 	void input()
 	{
 		cout<<"Enter distance in kilometre : ";
 		cin>>km;
        cout<<"Enter distance in metre : ";
        cin>>mtr;
    }
 
 
void add(Distance d1, Distance d2)
 {
 	mtr=d1.mtr+d2.mtr;
    km=d1.km+d2.km;
 
     if(mtr>999)
     {
       mtr=mtr-1000;
       km=km+1;
     }
 }
 
 
void output()
    {
        cout<<"Sum of distances: "<<km<<" km "<<mtr<<" m";
    }

};

int main()
{
 Distance d1,d2,d3;
 d1.input();
 d2.input();
 d3.add(d1,d2);
 d3.output();
 return 0;
}

