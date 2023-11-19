#include<iostream>

using namespace std;

int main() {
	

	int points = 0;

	char answer1, answer2, answer3;

	cout << "1. When did Columbus discover America?\na) 1578\nb) 1745\nc) 1492\n";
	cout << "Choose a answer: ";
	cin >> answer1;

	if (answer1 == 'c')
		points += 3;
	cout << ((answer1 == 'c') ? "Your answer is correct" : "You have picked the wrong answer") << endl;

	cout << "2. What is the capital city of France?\na) Rome\nb) Paris\nc) Manila\n";
	cout << "Choose a answer: ";
	cin >> answer2;

	if (answer2 == 'b')
		points += 3;
	cout << ((answer2 == 'b') ? "Your answer is correct" : "You have picked the wrong answer") << endl;

	cout << "3. What is the highest mountian peak in th world?\na) Mount Everest\nb) Kilimanjaro\nc) Elbrus\n";
	cout << "Choose a answer: ";
	cin >> answer3;

	if (answer3 == 'a')
		points += 3;
	cout << ((answer3 == 'a') ? "Your answer is correct" : "You have picked the wrong answer") << endl << endl;

	cout << "You have scored " << points << "/9 points" << endl;



	return 0;
}
