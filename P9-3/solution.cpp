
#include <iostream>
using namespace std;

const int SIZE = 20;

// function prototypes
void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main()
{
	srand(time(0));
	int values[SIZE];

	do
	{
		for (int i = 0; i < SIZE; i++)
		{
			int n = rand() % 6 + 1;
			values[i] = n;
		}

		if (hasRun(values, SIZE))
		{
			cout << "has run: ";
			displayRun(values, SIZE);
		}
		else
		{
			cout << "has no run: ";
			for (int i = 0; i < SIZE; i++)
				cout << values[i] << " ";
			cout << endl;
		}
	} while (!hasRun(values, SIZE));

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
		else if (i < 18)
			cout << values[i] << " ";
		else
		{
			cout << values[i] << " ";
			cout << values[i + 1];
		}
	}
}

bool hasRun(int values[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] == values[i + 1])
			return true;
	}
	return false;
}