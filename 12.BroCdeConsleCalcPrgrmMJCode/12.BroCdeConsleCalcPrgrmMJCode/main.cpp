#include<iostream>
using namespace std;

int main() {

	char op;
	double num1;
	double num2;
	double result;

	cout << "***********CALCULATOR***********\n";

	cout << "Enter either (+,-,*,/): ";

	cin >> op;

	cout << "Enter #1: ";

	cin >> num1;

	cout << "Enter #2: " << endl;

	cin >> num2;

	switch (op) {

	case '+':

		result = num1 + num2;
		cout << result;
		break;

	case '-': 
		result = num1 - num2;
		cout << result;
		break;

	case '*':
		result = num1 * num2;
		cout << result;
		break;

	case '/':
		result = num1 / num2;
		cout << result;
		break;

	default: cout << "Enter an approptiate operator" << endl;
	}

	cout << "\n***********************************";

}