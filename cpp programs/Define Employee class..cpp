/*Define Employee class.
Data Members -empid, ename,BasicSalary, HRA(30% of basicSal), TA(20% of basicSal), GrossSalary = basic + HRA + TA
Member Functions - input(), output(), calculateGross()*/

#include <iostream>
using namespace std;

class Employee
{
	private:
		int empid;
		char ename[30];
		float basic_salary;
		float HRA;
		float TA;
		float gross_salary;
		
    public:
    	
    void input()
    {
    cout <<"Enter employee ID :";
    cin>>empid;
    
    cout <<"\nEnter employee name :";
    cin>>ename;
    
    cout <<"\nEnter Basic Salary :";
    cin >>basic_salary;
    
    TA=0.2*basic_salary;
    HRA= 0.3*basic_salary;
}
    void output()
    {
      cout<<"\n\nEmployee details are as follows :";
      cout<<"\nEmployee ID:"<<empid;
      cout<<"\nEmployee name:"<<ename;
      cout<<"\nBasic Salary of "<<ename<<" is "<<basic_salary;
      
      cout<<"\n\nHRA of "<<ename<<" is :"<<HRA;
      cout<<"\n\nTA of "<<ename<<" is :"<<TA;
	
}
	void calculate_gross()
	{
	
			if(TA==basic_salary)	
		{
		cout<<"\n\nGross salary of "<<ename<<" is :"<<(basic_salary + HRA + TA);
}
}
};

int main()
{
Employee e1;
e1.input();
e1.output();
e1.calculate_gross();
return 0;
}

