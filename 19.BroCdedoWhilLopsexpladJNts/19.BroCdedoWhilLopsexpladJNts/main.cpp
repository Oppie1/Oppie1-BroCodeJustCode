#include<iostream>
using namespace std;




int main() {

	
	int number;

	do {
		cout << "Please enter a positive number" << endl;

		cin >> number;

	} while (number < 0);

	cout << "The positive number is: " << number << endl;

	cout << "\n\n-------If not using a do while loop-------\n\n" << endl;

	int number2;

	cout << "Please enter a positive number" << endl;
	
	cin >> number2;

	while (number2 <= 0) {

		cout << "Please enter a positive number" << endl;

		cin >> number2;

	}

	cout << "You entered a positive number which is: " << number2;

	return 0;
}

//Key difference: A do-while loop asks for input once before checking the condition,
//while a regular while loop checks th condition first. This makes do-while more
//efficient when you need to get input at least one time.