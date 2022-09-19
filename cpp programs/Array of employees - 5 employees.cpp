/*Array of employees - 5 employees
Data Members : name, emp_id, basic_sal,
TA - 10% of basic, DA - 20% of basic, HRA - 40% of basic, Gross - Basic + TA + DA + HRA
Member Functions : input(), Output() ,Pvt - Calculator()*/

#include<iostream>
using namespace std;

class Employee{
	private:
	    char name[20];
	    int employee_id;
	    long basic_salary,TA,DA,HRA,Gross_salary;
	     
	    void calculator()
	    {
	    	TA=0.1*basic_salary;
	    	DA=0.2*basic_salary;
	    	HRA=0.4*basic_salary;
	    	Gross_salary =basic_salary + TA + DA + HRA;
		}
		
		public:
			void input()
			{
			   cout<<"\nEnter the name of the employee : ";
			   cin>>name;
			   cout<<"Enter the employee ID : ";
			   cin>>employee_id;
			   cout<<"Enter the salary of the employee : ";
			   cin>>basic_salary;
			   calculator();
			}
			
			void output()
			{
				cout<<"\nName of the employee : "<<name;
				cout<<"\nEmployee ID : "<<employee_id;
				cout<<"\nSalary : "<<basic_salary;
				cout<<"\nTA = "<<TA;
	    	    cout<<"\nDA = "<<DA;
	    	    cout<<"\nHRA = "<<HRA;
	    	    cout<<"\nGross Salary = "<<Gross_salary;
			}
};

int main()
{
	Employee e1[5];
	
	for(int i=1;i<=2;i++)
	{
		cout<<"Enter details for employee "<<i;
		e1[i].input();
		cout<<"\n-----------------------\n";
	}
	
	for(int i=1;i<=2;i++)
	{
		cout<<"\nDetails of employee "<<i;
		e1[i].output();
		cout<<"\n-----------------------\n";
	}
	
	return 0;
}

