#include<iostream>

using namespace std;

int main() {
	

	int num1, num2;
	char operation;

	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the operation: ";
	cin >> operation;
	cout << "Enter the second number: ";
	cin >> num2;

	switch (operation)
	{
	case '+':
		cout << "Result is " << num1 + num2 << endl;
		break;
	case '-':
		cout << "Result is " << num1 - num2 << endl;
		break;
	case '*':
		cout << "Result is " << num1 * num2 << endl;
		break;
	case '/':
		cout << "Result is " << num1 / num2 << endl;
		break;
	case '%':
		cout << "Result is " << num1 % num2 << endl;
		break;
	default:
		break;
	}




	return 0;
}
