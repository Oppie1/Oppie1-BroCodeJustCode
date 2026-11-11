#include <iostream>
#include <ctime>
using namespace std;



char getPlayerChoice();

char getComputerChoice();

void showChoice(char choice);

void chooseWinner(char player, char computer);


int main() {

	char playerChoice;
	char computerChoice;

	playerChoice = getPlayerChoice();

	cout << "Your choice: ";

	showChoice(playerChoice);

	computerChoice = getComputerChoice();

	cout << "Computer's choice: ";

	showChoice(computerChoice);

	chooseWinner(playerChoice, computerChoice);

}

char getPlayerChoice() {


	char playerChoice;

	cout << "Rock-Paper-Scissors Game!\n";

	do {
		cout << "Choose one of the following\n";
		cout << "******************************************\n\n";
		cout << "'r' for rock\n";
		cout << "'p' for paper\n";
		cout << "'s' for scissors\n";
		
		cin >> playerChoice;

	} while (playerChoice != 'r' && playerChoice != 'p' && playerChoice != 's');

	return playerChoice;
}

char getComputerChoice() {

	srand(time(0));

	int num = rand() % 3 + 1;

	switch (num) {

	case 1: return 'r';
	case 2: return 'p';
	case 3: return 's';

	}

}


void showChoice(char choice) {

	switch (choice) {

	case 'r': cout << "\nRock! \n";
		break;
	case 'p': cout << "\nPaper!\n";
		break;
	case 's': cout << "\nScissor!\n";
	}
	
}

void chooseWinner(char player, char computer) {

	switch (player) {

	case 'r': if ('r' == computer) {

		cout << "You tied!\n";
	}
			else if ('p' == computer) {

		cout << "You lose!\n";
	}

			else {

		cout << "You win!\n";
	}

			break;

	case 'p': if ('p' == computer) {

		cout << "You tied\n";
	}
			else if ('s' == computer) {

		cout << "You lose!\n";
	}

			else {

		cout << "You win!\n";
	}

			break;

	case 's': if ('s' == computer) {

		cout << "You tied\n";
	}
			else if ('r' == computer) {

		cout << "You lose\n";
	}
			else {
		cout << "You win\n";
		break;
	}
	}
}