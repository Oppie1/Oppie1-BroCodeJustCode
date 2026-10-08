#include<iostream>
using namespace std;


int main() {

	//&& = evaluates to true only when both conditions are satisfied
	//|| = evaluates to true if at least one condition is satisfied
	//! = inverts (switches) the truth value of a condition


	int temp1;
	int temp2;

	bool sunny = false;

	cout << "Enter the temperature: ";

	cin >> temp1;

	if (temp1 > 0 && temp1 < 30) {

		cout << "It is a good temp out" << endl;
	}
	else {
		cout << "It's not nice out" << endl;
	}
		cout << "Enter temperature 2:";

		cin >> temp2;

		if (temp2 < 0 || temp2 >30) {

			cout << "The weather is bad today" << endl;
		}

		else { cout << "The weather is good" << endl; }

		if (sunny) {

			cout << "It's sunny out!" << endl;
		}

		else if (!sunny) {

			cout << "Its not sunny out" << endl;
		}

	}

