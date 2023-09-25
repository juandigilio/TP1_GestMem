#include <iostream>


using namespace std;

int* GetAddress(int* numsArray, int arraySize, int toFind);


void main()
{
	int numsArray[10];
	int* aux = numsArray;

	for (int i = 0; i < 10; i++)
	{
		*aux = (rand() % 101) + 100;

		cout << "The value located at " << aux << " is: " << *aux << endl;

		aux++;
	}

	int toFind;
	bool exist = false;

	do
	{
		cout << endl << "Enter the value to search: ";
		cin >> toFind;

		aux = numsArray;

		for (int i = 0; i < 10; i++)
		{
			if (*aux == toFind)
			{
				exist = true;
				break;
			}
			aux++;
		}

		if (!exist)
		{
			cout << endl << "The value doensn't exist, try again!" << endl;
		}

	} while (!exist);

	aux = GetAddress(numsArray, 10, toFind);

	cout << "The address of the the number " << toFind << " is " << aux << endl;
	
}

int* GetAddress(int* numsArray, int arraySize, int toFind)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (*numsArray == toFind)
		{
			return numsArray;
			break;
		}
		numsArray++;
	}
}