#include<iostream>
#include<string>
using namespace std;



int main() {

	string name;
	int number;

	while (name.empty()) {

		cout << "Please enter your name" << endl;
		getline(cin, name);
	}

	cout <<"Hello" << name << endl;

	cout << "Enter a Number----------------------------" << endl;
	cin >> number;

	while (number == 1) {

		cout << "Help I am stuck in this body!!!!" << endl;
	}

	cout << "You skipped the while loop" << endl;

}

//Example of an infinite loop using a while statement.
//while (1==1){

//cout <<"Help! I am stuck in an infinite loop" << endl;
//}