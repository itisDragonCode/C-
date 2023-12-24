#include<iostream>
#include<cassert>

using namespace std;

struct Student {
	int age=23;
	string fName="Tom";
	string lName="Rose";
	int numberGrades = 0;
	int* grades;
	void input()
	{
		cout << "Enter age od student: ";
		cin >> age;
		cout << "Enter the first name od student: ";
		cin >> fName;
		cout << "Enter the last name od student: ";
		cin >> lName;
		cout << "Enter number of grades: ";
		cin >> numberGrades;
		grades = new int[numberGrades];
		cout << "Enter grades : "<<endl;
		for (size_t i = 0; i < numberGrades; i++)
		{
			cin >> grades[i];
		}
	}
	void output()
	{
		cout << fName << " " << lName << " is " << age << " years old" << endl;
		cout << "Grades: ";
		for (size_t i = 0; i < numberGrades; i++)
		{
			cout << grades[i] << " ";
		}
	}
	float averageGrade()
	{
		float sum = 0;
		if (numberGrades == 0)
			return sum;
		for (size_t i = 0; i < numberGrades; i++)
		{
			sum += grades[i];
		}
		return sum / numberGrades;
	}
	void del()
	{
		delete[]grades;
	}
};


int main()
{
	Student s;

	s.input();
	s.output();
	cout << "\n\nAverage grade is " << s.averageGrade() << "\n\n";
	s.del();

	

	
	
	return 0;
}




