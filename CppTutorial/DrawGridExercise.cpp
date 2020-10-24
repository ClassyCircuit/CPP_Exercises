#include <iostream>
using namespace std;

// Draw a grid that looks something like this.
// Length and Height of the grid are given as function parameters.

// In this example, there are 6 columns and 3 rows:
// X X X X X X
// X X X X X X
// X X X X X X

// Use loops and arrays to draw the grid.

void DrawGrid(char gridSymbol, int columns, int rows)
{
	// Solve the exercise:
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {

			cout << gridSymbol;
		}
		cout << endl;
	}
	cout << endl;
}