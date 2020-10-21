#include <iostream>
using namespace std;

/// <summary>
/// Calculates the average value for a given list of numbers.
/// Example: (2 + 4 + 6) / 3 = 4
/// </summary>
/// <param name="arrayOfTemperatures">array containing numbers of type: double</param>
/// <param name="arraySize">how many elements are in the array</param>
void CalculateAverageTemperature(double arrayOfTemperatures[], int arraySize)
{
	// Solve the exercise:
	double Sum = 0;
	double Average = 0;
	int Count = 0;

	for (int i = 0; i < arraySize; i++) {
		Sum = Sum + arrayOfTemperatures[i];
		Count++;
	}

	Average = Sum / Count;

	if (Count > 0) {
		cout << Average;
	}
}
