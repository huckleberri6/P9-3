
#include <iostream>
using namespace std;

const int SIZE = 20;

// function prototypes
void displayRun(int values[], int size);

int main()
{
	srand(time(0));
	int values[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		int n = rand() % 6 + 1;
		values[i] = n;
	}
	displayRun(values, SIZE);
}

void displayRun(int values[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] == values[i + 1])
		{
			cout << "(";
			while (values[i] == values[i + 1])
			{
				cout << values[i] << " ";
				i++;
			}
			cout << values[i] << ") ";
		}
		else
			cout << values[i] << " ";
	}
}