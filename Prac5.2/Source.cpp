#include <iostream>

using namespace std;

void printStars(int n);
void printLines(int m);

int main()
{
	printLines(4);
	return 0;
}


void printLines(int m)
{
	if (m > 0)
	{
		printStars(m);
		printLines(m - 1);
	}
	printStars(m);
}

void printStars(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "*";
	}
	cout << endl;
}