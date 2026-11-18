#include <iostream>
using namespace std;


int main() {

	string questions[] = { "1. What is Adam's last name?	",
							"2. Where does Adam live currently",
							"3. Where was Adam born?",
							"4. Is the earth flat?" };

	string options[][4] = { {"A. Tinall", "B.Dolgard", "C.McNeal", "D.Smith"},
	{ "A. Waukesha", "B. Panama City Beach", "C. LA", "D. NY" },
	{ "A. Chicago", "B.Orlando", "C.Panama City", "D.Green Bay" },
	{ "A. Yes", "B.No", "C.Sometimes", "D.What is Earth" }
	};
	
	char answerKey[] = {'A', 'B', 'D', 'C'};

	int size = sizeof(questions) / sizeof(questions[0]);

	char guess;

	int score = 0;

	for (int i = 0; i < size; i++) {

		cout << "************************************\n";
	
		cout << questions[i] << "\n";

		cout << "************************************\n";

		for (int j = 0; j < sizeof(options[0]) / sizeof(options[0][0]); j++) {

			cout << options[i][j] << '\n';

		}

		cout << endl;
		
		cin >> guess;

		guess = toupper(guess);

		if (guess == answerKey[i]) {

			cout << "Correct!";

			score++;

		}

		else {

			cout << "Wrong" << endl;

			cout << "The correct answer was: " << answerKey[i] << endl;
		}

		cout << "************************************\n";
		cout << "*              Results              *\n";
		cout << "************************************\n";

		cout << "Correct guesses: " << score << endl;
		
		cout << "Number of questions: " << size << endl;

		cout << "Your score is: " << (score / (double)size) * 100 << endl;
	}

}