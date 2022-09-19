//Demonstrate Dynamic initialization of objects

#include <iostream>
using namespace std;

class simple_interest
{
	private:
     int p, r, t, simple_int;
    public:
    	
		 simple_interest()
			 {
			     p = r = t = simple_int = 0;
			 }
			 
		 simple_interest(int a, int b, int c)
			 {
				 p = a;
				 r = b;
				 t = c;
			    simple_int = p * r * t;
		    }
		    
		 void output()
			 {
			     cout << "Simple Interest= " << simple_int;
			 }
};

int main()
{
 int principal, time,rate;
 
 
 cout << "Enter principal (P)=Rs.";
 cin >> principal;
 
 cout << "Enter rate in % (R)= ";
 cin>>rate;
 
 cout << "Enter time in years (T)= ";
 cin >> time;
 
 simple_interest s(principal, rate, time);
 s.output();
 return 0;
}
