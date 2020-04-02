#include <iostream>
#include <stack>
#include <vector>
#include <time.h>

using namespace std;

#include "state.h"

bool search(stack<State> states, State target) {
	if (states.top() == target)
	{
		return true;
	}
	else if (states.empty())
	{
		return false;
	}
	else
	{
		states.pop();
		return search(states, target);
	}
}

int main() {
	srand(time(0));

	State target;
	target.printBoard();
//	states.push(target);

	stack<State> states;
	for (int i = 0; i < 500; i++) {
		State s;
		states.push(s);
	}

	if (search(states, target))
		cout << "Found it! " << endl;
	else
		cout << "Did not found it!" << endl;

	return 0;
}

