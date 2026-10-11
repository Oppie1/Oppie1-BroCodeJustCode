#include<iostream>
#include<string>
using namespace std;


int main() {


	string name;
	cout << "Enter your name:\n";

	getline(cin, name);

	if (name.length() > 12) {

		cout << "The name entered is too long" << endl;
	}
	
	else {

		cout << "Hello " << name;
	}

	cout << "\n\nEnter your name example number 2 type name\n";

	getline(cin, name);

	if (name.empty()) {

		cout << "You did not enter a name." << endl;
	}

	else {

		cout << "Hello " << name;
	}


	cout << "\n\nEnter your name example number 3 type name\n" << endl;

	getline(cin, name);

	name.clear();
	cout << "Hello " << name;

	cout << "\n\nEnter your name example number 4 type name\n";
	
	getline(cin, name);

	name.append("@gmail.com");

	cout << name;

	cout << "\n\nEnter your user name example number type name 5\n";

	getline(cin, name);
	
	cout<<name.at(1);


	cout << "\n\nEnter your name example number 6 type name\n";

	getline(cin, name);

	name.insert(0, "@");
	cout << name;

	cout << "\n\nEnter your name example number 7 type full name with space.\n";

	getline(cin, name);

	cout << name.find(" ");

	cout << "\n\nEnter your name example number 8 enter name:\n";

	getline(cin, name);

	name.erase(0,3);
	cout << name;

}