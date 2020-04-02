#include <iostream>

using namespace std;

void printStars(int n);
void printLines(int m);

int main()
{
	//printStars(4);
	printLines(4);
	return 0;
}

void printLines(int m)
{
	if (m > 0)
	{
		printStars(m);
		printLines(m - 1);
		printStars(m);
	}
}

void printStars(int n)
{
	if (n == 0)
	{
		cout << endl;
	}
	else
	{
		cout << "*";
		printStars(n - 1);
	}
}