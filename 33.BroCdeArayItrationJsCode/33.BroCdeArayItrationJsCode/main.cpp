#include <iostream>
using namespace std;



int main() {


	cout << "Part One: Print Grades A-F to the screen with each character on its own line\n\n";

	char grades[] = { 'A','B','C','D','F' };

	for (int i = 0; i < sizeof(grades) / sizeof(grades[0]); i++) {

		cout << grades[i] << endl;
	}
	cout << "\n********************************************************************\n";

	string students[] = {"Adam", "Claudia","Nakai","Tokyo"};

	cout << "Part Two - Print names to screen using index locations and on each line\n\n";

	cout << students[0] << endl;
	cout << students[1] << '\n';
	cout << students[2] << endl;
	cout << students[3] << '\n';
	

	cout << "\n********************************************************************\n";
	cout << "Part Three - Print names to screen using a for loop\n\n";

	for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {

		cout << students[i] << endl;
	}


	return 0;
}