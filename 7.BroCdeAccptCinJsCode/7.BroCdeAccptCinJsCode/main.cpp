#include <iostream>
#include <string>//The string library is required for reading multiple words from user input.
using namespace std;


//Use cout with the insertion operator (<<) to display text to the user.
//Use cin with the extraction operator (>>) to receive input from the user.

int main() {


	string sentence1;

	string sentence2;

	int age;

	cout << "What's your name " << endl;

	cin >> sentence1;

	cout << "My name is " << sentence1 << endl;

	cout << "\nWhat is your full name?" << endl;

	getline(cin >> ws ,sentence2);

	cout << sentence2 << endl;
	cout << "\nHow old are you?" << endl;

	cin >> age;

	cout << sentence2 << " age is " << age;

	return 0;

}

//Additional note - where does this fit in?:
//cin.ign.ore();
//This function discards input left in the buffer, which is useful when mixing cin and
//getline operations to prevent getline from accidentally reading leftover characters from
//a previous cin statement