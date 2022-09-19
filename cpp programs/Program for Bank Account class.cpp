//Program for Bank Account class

#include <iostream>
using namespace std;

class Bank
{
	private:
	 string name_of_the_depositor;
	 unsigned long account_number;
	 string account_type;
	 double balance;
	 
	public:
	 void getData();
	 void showData();
	 void Deposit(double);
	 void Widthdraw(double);
};

void Bank::getData()
{
 fflush(stdin);
 cout << "\nEnter Account Info";
 cout << "\nName Of Account Holder: ";
 getline(cin, name_of_the_depositor);
 cout << "\nEnter Account Number: ";
 cin >> account_number;
 fflush(stdin);
 cout << "\nEnter Account Type: ";
 getline(cin, account_type);
 cout << "\nInitial Balance: ";
 cin >> balance;
}
void Bank::showData()
{
 cout << "\nEnter Account Info";
 cout << "\nName Of Account Holder: " << name_of_the_depositor;
 cout << "\nEnter Account Number: " << account_number;
 cout << "\nEnter Account Type: " << account_type;
 cout << "\nInitial Balance: " << balance;
}
void Bank::Deposit(double Depo)
{
 balance += Depo;
 cout << "New Balance is : " << balance;
 
}
void Bank::Widthdraw(double width)
{
 if (width > balance)
 cout << "\nInsufficient Funds.... Error";
 else
 balance -= width;
 cout << "\nCurrent Balance: " << balance;
 
int main()
{
 Bank A1;
 float transaction;
 A1.getData();
 A1.showData();
 cout << "\nEnter Deposit Amount: ";
 cin >> transaction;
 A1.Deposit(transaction);
 cout << "\nEnter Withdraw Amount: ";
 cin >> transaction;
 A1.Widthdraw(transaction)    
 return 0; 
}
