#include <iostream>


using namespace std;


void main()
{
	srand(time(NULL));




	int arraySize{};


	cout << "Salida datto original: " << arraySize << endl;

	cout << "Enter the size for the array: ";
	cin >> arraySize;


	int* numsArray = new int[arraySize];
	
	int* aux = numsArray;
	int* highestDir = numsArray;
	int randNum;
	int value;
	int position;

	for (int i = 0; i < arraySize; i++)
	{
		 *aux = (rand() % 401) + 100;

		 cout << endl << "The value located at " << aux << " is: " << *aux;

		 if (*aux > *highestDir)
		 {
			 highestDir = aux;
		 }

		 aux++;
	}


	cout << endl << endl << "The highest value is " << *highestDir << " and its located at " << highestDir << endl;

	cout << endl << "Enter a value to modify: ";
	cin >> value;

	do
	{
		cout << endl << "Enter a position for the value: ";
		cin >> position;

	} while (position < 0 || position > arraySize - 1);

	aux = numsArray;
	aux += position - 1;

	*aux = value;

	aux = numsArray;

	for (int i = 0; i < arraySize; i++)
	{
		cout << endl << "The value located at " << aux << " is: " << *aux;
		aux++;
	}

	cout << endl << endl;
	
	delete[] numsArray;
}