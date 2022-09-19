#include <iostream>
using namespace std;

class Student
{
private:
	char name[30];
	char subject[30];
	float marks[10];
	float percentage;
	float sum = 0;

public:
	void input()
	{
		cout << "\nEnter the name of the student : ";
		cin >> name;
		cout << "\nEnter marks scored by the student in 5 subjects(out of 100):\n";
		for (int i = 1; i <= 5; i++)
		{
			cout << "Subject number " << i << " : ";
			cin >> marks[i];
		}
	}

	void calculate_percentage()
	{
		for (int i = 1; i <= 5; i++)
			sum += marks[i];
		percentage = sum / 5;
		cout << "\nPercentage : " << percentage << "%";
	}

	void output()
	{
		cout << "\nName of the student :" << name;
		cout << "\nMarks obtained by " << name;
		for (int i = 1; i <= 5; i++)
		{
			cout << "\nSubject number " << i << " : " << marks[i];
		}
	}
};

int main()
{
	Student s1[5];
	for (int i = 1; i <= 2; i++)
	{
		cout << "Enter details of student " << i;
		s1[i].input();
		cout << "\n---------------------------------------------------------------\n";
	}
	cout << "\n\nDETAILS:";
	for (int i = 1; i <= 2; i++)
	{
		cout << "\nDetails of student " << i;
		s1[i].output();
		s1[i].calculate_percentage();
		cout << "\n----------------------------------------------------------------\n";
	}
	return 0;
}
