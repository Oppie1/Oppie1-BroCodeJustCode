#include<iostream>
using namespace std;



int main() {


	cout << "Part 1: Using string array named students iterate over 4 names using foreach loop" << '\n' << endl;

	string students[] = { "Adam","Claudia","Nakai","Tokyo" };

	for (string element : students) {

		cout << element << endl;
	}

	cout << "\n**************************************************************************\n";
	cout << "Part two: Do same operation with an int data type following same process as above " << endl;

	int grades[] = { 'A','B','C','D','F' };

	for (int element : grades) {

		cout << element << endl;
	}
	
	cout << endl;

}