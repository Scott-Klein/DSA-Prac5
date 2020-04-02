#include <iostream>


using namespace std;

int Power(int x, int y);


int main()
{
	cout << Power(2, 16) << endl;
	return 0;
}

int Power(int x, int y)
{
	if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		return x * Power(x, y - 1);
}