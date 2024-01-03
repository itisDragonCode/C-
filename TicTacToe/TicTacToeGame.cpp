#include<iostream>

using namespace std;


void printGrid(char g[][3])
{
	for (size_t i = 0; i < 3; i++)
	{
		cout << "| ";
		for (size_t j = 0; j < 3; j++)
		{
			cout<<g[i][j]<<" | ";
		}
		cout << endl;
	}
}

bool isFull(char g[][3])
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (g[i][j] == ' ')
				return false;
		}
	}

	return true;
}

bool isWin(char g[][3])
{
	for (size_t i = 0; i < 3; i++)//checking rowS
	{
		if (g[i][0] == 'X' && (g[i][0] == g[i][1] && g[i][1] == g[i][2]))
			return true;
		if (g[i][0] == 'O' && (g[i][0] == g[i][1] && g[i][1] == g[i][2]))
			return true;
	}
	for (size_t i = 0; i < 3; i++)//checking columns
	{
		if (g[0][i] == 'X' && (g[0][i] == g[1][i] && g[1][i] == g[2][i]))
			return true;
		if (g[0][i] == 'O' && (g[0][i] == g[1][i] && g[1][i] == g[2][i]))
			return true;
	}

	if (g[0][0] == 'X' && (g[0][0] == g[1][1] && g[1][1] == g[2][2]))//checking main diagonal
		return true;
	if (g[0][0] == 'O' && (g[0][0] == g[1][1] && g[1][1] == g[2][2]))
		return true;

	if (g[0][2] == 'X' && (g[0][2] == g[1][1] && g[1][1] == g[2][0]))//checking secondary diagonal
		return true;
	if (g[0][2] == 'O' && (g[0][2] == g[1][1] && g[1][1] == g[2][0]))
		return true;

	return false;
}


int main() {

	char grid[3][3];
	int row, col;
	char xo = 'X';

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			grid[i][j] = ' ';
		}
	}

	while (!isFull(grid) && !isWin(grid))
	{
		cout << "Payer " << xo << " is on move\n\n";
		printGrid(grid);
		cout << "\n\nEnter row of field(1-3): ";
		cin >> row;
		cout << "Enter column of field(1-3): ";
		cin >> col;
		if (grid[row - 1][col - 1] == ' ')
		{
			grid[row - 1][col - 1] = xo;
			xo == 'X' ? xo = 'O' : xo = 'X';

			cout << "\nConfirm move (enter)";
		}
		else
		{
			cout << "\nField is full. Try again (enter)";
		}

		cin.ignore();
		cin.get();
		system("cls");
	}

	cout << endl;

	printGrid(grid);
	cout << "\n\nGame over" << endl;


	return 0;
}
