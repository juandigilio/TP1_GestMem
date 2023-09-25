#include <iostream>
#include <conio.h>


using namespace std;

void Pluralize(char* aux);

void main()
{
	char word[12]{};
	int length = 0;

	char* aux{};

	bool keepOn = true;

	while (keepOn)
	{
		aux = word;

		for (int i = 0; i < 12; i++)
		{
			*aux = '0';
			aux++;
		}

		do
		{
			aux = word;
			length = 0;

			cout << "Ingrese una palabra de maximo 10 caracteres, presione 0 para finalizar el ingreso: ";

			for (int i = 0; i < 10; i++)
			{
				*aux = toupper(_getch());

				length++;

				if (*aux == '0')
				{
					break;
				}

				cout << *aux;

				aux++;
			}

			cout << endl << endl;

		} while (length > 10);

		aux = word;

		if (length < 2)
		{
			keepOn = false;
		}
		else
		{
			Pluralize(aux);

			cout << endl << endl;
		}
	}
}

void Pluralize(char* aux)
{
	char* backUp = aux;

	int size = 0;

	for (int i = 0; i < 10; i++)
	{
		if (*aux == '0')
		{
			break;
		}
		else
		{
			size++;
			aux++;
		}
	}

	aux--;

	if (*aux == 'A' || *aux == 'E' || *aux == 'O')
	{
		aux++;
		*aux = 'S';
	}
	else if (*aux == 'Z')
	{
		*aux = 'C';
		aux++;
		*aux = 'E';
		aux++;
		*aux = 'S';
	}
	else if (*aux == 'S' || *aux == 'X')
	{

	}
	else
	{
		aux++;
		*aux = 'E';
		aux++;
		*aux = 'S';
	}	

	for (int i = 0; i < 12; i++)
	{
		if (*backUp == '0')
		{
			break;
		}
		else
		{
			cout << *backUp;
			backUp++;
		}
	}
}

