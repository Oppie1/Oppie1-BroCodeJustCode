#include<iostream>
using namespace std;

//If statements allow your program to make decisions: execute a block of code only when a specific condition 
//evaluates as true.

int main() {

	int age;
	cout << "Enter your age: ";

	cin >> age;

	if (age > 100) {

		cout << "You may not enter this website you are too old" << endl;
	}

	else if (age > 18) {
		cout << "Welcome to the website" << endl;
	}

	else if (age == 18) {

		cout << "You can enter the website you are exactly 18" << endl;
	}

	//Create an else if statement that checks if age is greater than or equal to 18. Display a welcome message
	//explaining that this comparison operator is the correct one to use in this scenario. This would take
	// care of what is accomplished from the two if else statements above in one swoop.
	//CODE:

	else if (age < 0) {

		cout << "You're not born yet" << endl;
	}

	else {

		cout << "You're not 18 yet and so cant enter the website" << endl;
	}


	return 0;
}