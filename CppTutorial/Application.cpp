// Application.cpp : This file contains the 'main' function. Program execution begins and ends there

#include <iostream>
#include "Application.h"
#include "AveragesExercise.h"
#include "DrawGridExercise.h"
#include "StringChecker.h"

using namespace std;

/// <summary>
/// Application starting point.
/// </summary>
/// <returns></returns>
int main()
{
	int choice = 0;
	cout << "Select which exercise to run:" << endl;
	cout << "1 - Averages exercise.\n2 - StringChecker exercise.\n3 - DisplayGrid exercise." << endl;
	cin >> choice;

	ChooseExercise(choice);
}

void ChooseExercise(int exerciseNumber)
{
	switch (exerciseNumber) {
	case 1:
		cout << "Starting Averages exercise.." << endl;
		StartAveragesExercise();
		break;
	case 2:
		cout << "Starting StringChecker exercise.." << endl;
		StartStringCheckerExercise();
		break;
	case 3:
		cout << "Starting DrawGrid exercise.." << endl;
		StartDrawGridExercise();
		break;
	}
}

/// <summary>
/// Defines a list of temperatures. 
/// Then uses 'CalculateAverage' function to get the average of those temperatures.
/// </summary>
void StartAveragesExercise()
{
	// an array of temperatures
	double temperatures[] = { 21.5, 35.7, 40, 16.6 };

	// size of the array
	int arraySize = sizeof(temperatures) / sizeof(temperatures[0]);

	// calculates average temperature
	CalculateAverageTemperature(temperatures, arraySize);
}
 
/// <summary>
/// Defines a list of text and words.
/// Checks if the word is inside the text.
/// </summary>
void StartStringCheckerExercise()
{
	string Data[4][2] = { {"Bird is flying around", "Bird"}, 
						   {"Hippo is swimming", "Cat"}, 
						   {"Squirrel is climbing a tree", "tree"}, 
						   {"Cat is sleeping", "dog"}
						 };

	for (int i = 0; i < 4; i++)
	{
		CheckIfTextContainsWord(Data[i][0], Data[i][1]);
	}

}

/// <summary>
/// Defines symbol with which to draw a grid.
/// Defines the grid size and then draws it.
/// </summary>
void StartDrawGridExercise() {
	char symbol[] = { 'A', 'S', 'C', 'I', 'I' };
	int GridSize[5][2] = { 
							{3, 4}, 
							{4, 10}, 
							{6, 16},
							{8, 22},
							{10, 38},
						 };

	for (int i = 0; i < 5; i++)
	{
		DrawGrid(symbol[i], GridSize[i][0], GridSize[i][1]);
	}

}
