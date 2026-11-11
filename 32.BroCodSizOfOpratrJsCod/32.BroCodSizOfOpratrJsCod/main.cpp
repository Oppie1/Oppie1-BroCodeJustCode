#include<iostream>
using namespace std;



int main() {


	string name = "Bro Code";

	double gpa = 3.7;

	char grade = 'A';

	bool students = true;

	char grades[] = { 'A', 'B', 'C', 'D', 'F' };

	char grades2[] = { 'A', 'B', 'C','D','F' };

	string students1[] = { "Adam", "Claudia","Tokyo", "Nakai" };
	string students2[] = { "Adam", "Claudia", "Tokyo", "Nakai" };

	cout << sizeof(gpa) << endl;

	cout << sizeof(double) << endl;

	cout << sizeof(name) << endl;

	cout << sizeof(grade) << "   " << sizeof(char) << endl;

	cout << sizeof(char) << endl;

	cout << sizeof(students) << endl;

	cout << sizeof(bool) << endl;

	cout << sizeof(grades) << endl;

	cout << sizeof(grades) / sizeof(char) << endl;

	cout << sizeof(grades2) / sizeof(grades2[0]) << endl;

	cout << sizeof(students1) / sizeof(string) << " elements " << endl;

	cout << sizeof(students2) / sizeof(string) << " elements" << endl;

}