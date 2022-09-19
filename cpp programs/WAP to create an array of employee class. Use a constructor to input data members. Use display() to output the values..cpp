//WAP to create an array of employee class. Use a constructor to input data members. Use display() to output the values.

#include <iostream>
using namespace std;
 
class Employee{
	float basic_sal , HRA , DA , gross_sal;
	char emp_name[20];
	
	public:
		void calculate()
		{
			HRA = basic_sal * 0.3;
			DA = basic_sal* 0.2;
			gross_sal = basic_sal + HRA + DA;
        }
        
        void input()
        {
        	cout<<"\nEnter employee's name : ";
        	cin>> emp_name;
        	cout<<"Enter Salary : ";
        	cin>> basic_sal;
        	cout<<"\n";
        	calculate();
		}
		
		void output()
		{
			cout<<"\nEmployee name : "<<emp_name;
			cout <<"\nSalary : "<<basic_sal;
			cout<<"\nHRA : "<<HRA;
			cout<<"\nDA : "<<DA;
			cout<<"\nGross Salary : "<<gross_sal;
		}
		
		Employee()
		{
			cout<<"Constructor called...\n";
			input();
		}
		
		~Employee()
		{
			cout<<"\n\nDestructor called...";
		}
};

int main()
{
	{
		Employee e[2];
		
		for(int i=0 ; i< 2 ; i++)
		{
		    cout<<"\n\nDetails for employee: "<<i+1<<"\n";
		    e[i].output();
		}
		
		return 0 ;
	}
}
 

