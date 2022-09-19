//Demonstrate invoking member function with different ways (3-ways), but no dynamic memory allocation being used

#include<iostream>
using namespace std;

class Color
{
	char colour[20];
	 public:
	 	void input()
			 {
			 cout<<"\nWhat your favourite colour?\n";
			 cin>>colour;
			 }
			 
	    void output()
	    {
	    	cout<<"Your favourite colour is : "<<colour;
		}
 
};


int main()
{
 Color c ;
 cout<<"--Using object to call functions--";
 c.input();
 c.output();
 Color *p = &c;
 cout<<"\n\n--Using dot operator to call functions--";
 (*p).input();
 (*p).output();
 cout << "\n\n--Using arrow operator to call functions--";
 p->input();
 p->output();
 return 0;
}
