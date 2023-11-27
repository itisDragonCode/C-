#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;




int main()
{
	srand(time(NULL));

	int num1, num2, result, operation;
	bool next;
	int score = 0;
	int mistakes = 0;

	while (true)
	{
		num1 = rand() % 100 + 1;
		num2 = rand() % 100 + 1;
		operation = rand() % 4 + 1;

		switch (operation)
		{
		case 1:
			cout << num1 << " + " << num2 << " = ";
			cin >> result;

			if (num1 + num2 == result) {
				cout << "Correct\n\n";
				score++;
			}
			else
			{
				mistakes++;
				cout << "Incorrect\n\n";
			}
			break;
		case 2:
			cout << num1 << " - " << num2 << " = ";
			cin >> result;

			if (num1 - num2 == result) {
				cout << "Correct\n\n";
				score++;
			}
			else
			{
				mistakes++;
				cout << "Incorrect\n\n";
			}
			break;
		case 3:
			cout << num1 << " * " << num2 << " = ";
			cin >> result;

			if (num1 * num2 == result) {
				cout << "Correct\n\n";
				score++;
			}
			else
			{
				mistakes++;
				cout << "Incorrect\n\n";
			}
			break;
		case 4:
			cout << num1 << " / " << num2 << " = ";
			cin >> result;

			if (num1 / num2 == result) {
				cout << "Correct\n\n";
				score++;
			}
			else
			{
				mistakes++;
				cout << "Incorrect\n\n";
			}
			break;
		default:
			break;
		}



		if (mistakes >= 3)
			break;

		cout << "\nDo you want to continue(0/1): ";
		cin >> next;

		if (next == true) {
			system("cls");
		}
		else
		{
			break;
		}
	}

	cout << "\nYour score is " << score << endl;



	return 0;
}




