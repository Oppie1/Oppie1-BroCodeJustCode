#include <iostream>
using namespace std;


int main() {

	int num;
	int guess;
	int tries = 0;

	srand(time(NULL));

	num = (rand() % 100) + 1;

	cout << "*****Number Guessing Game******\n" << endl;


	do {

		cout << "Enter a guess between 1 = 100: ";

		
		cin >> guess;
		
		tries++;

		if (guess > num) {

			cout << "You guessed too high!" << endl;
		}

		else if (guess < num) {

			cout << "You guessed too low" << endl;
		}

		else {

			cout << "You guessed correctly!" << endl;
		}

	} while (guess != num);

	cout << "\nCongrats on guessing number -> \n" << num << endl;

	cout << "\n**************The Guessing Game Has Concluded****************\n" << endl;
	
}