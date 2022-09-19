//Define a class to represent a bank account
#include<bits/stdc++.h>
using namespace std;

class Bankaccount{
	private:
		char name[30];
		int acc_no,balance,deposit_amt,choose,option;
		char acc_type[30];
		string W;
		
		public:
			int wthdrw;
			void input()
			{
				cout<<"Enter the depositor's name: ";
				cin>>name;
				
				cout<<"Enter the depositor's account number: ";
				cin>>acc_no;
				
				cout<<"Enter the account type :";
				cin>>acc_type;
				
				cout<<"Enter your initial balance:";
				cin>>balance;
			}
			
			void output()
			{
				cout<<"\n\nDETAILS:";
				cout<<"\nName:"<<name;
				cout<<"\nAccount number:"<<acc_no;
				cout<<"\nAvailable balance:"<<balance;
			}
			
			void deposit()
			{
				cout<<"\n\nDo you want to deposit any amount?\n";
				cout<<"1.Yes"<<"\n2.No\n";
				cin>>choose;
				switch(choose){
					case 1: cout<<"\n\nEnter the amount you want to deposit:";
				            cin>>deposit_amt;
				            balance = deposit_amt + balance;
				            cout<<"\nYour current balance is:"<<balance;
				            break;
				    case 2: cout<<"Procedure cancelled";
					        break;
					default:cout<<"Invalid option! Enter the correct option(1/2)";
					        break;       
				}
				
			}
			
			void withdraw()
			  {
			 do{
				cout<<"\n\nEnter the amount you want to withdraw :";
				cin>>wthdrw;
				if(wthdrw <=balance)
				{
					cout<<"\nAmount succesfully withdrawn: "<<wthdrw;
					cout<<"\nBalance after withdrawal ="<<(balance - wthdrw);
					break;
				}
				else
                {
					cout<<"\nInsufficient balance!,Enter 1 to withdraw again :\n";
					cin>>option;
				}
			
		}		while(option == 1);	
		}

};

int main()
{
	int choice;
	Bankaccount b1;
	b1.input();
	b1.output();
	b1.deposit();
	b1.withdraw();
	
	return 0;
}
