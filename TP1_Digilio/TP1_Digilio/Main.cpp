#include <iostream>


using namespace std;


void main()
{
	srand(time(NULL));

	int arraySize;

	cout << "Enter the size for the array: ";
	cin >> arraySize;

	int* numsArray = new int[arraySize];
	int* aux = numsArray;

	int randNum;

	for (int i = 0; i < arraySize; i++)
	{
		 int aux = (rand() % 401) + 100;
		 aux++;
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << numsArray[i] << endl;
	}
	//int randDirection = rand() % 4;
}