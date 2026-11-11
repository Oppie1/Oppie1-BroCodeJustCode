#include<iostream>
using namespace std;



double square(double length);

double cube(double length);

string stringsFunction(string string1, string string2);


int main() {

	double length = 5;

	double area = square(length);

	double volume = cube(length);

	string firstName = "Adam";
	string lastName = "Tindall";

	string fullName = stringsFunction(firstName, lastName);

	cout << fullName << " is great" << endl;

	cout << "The square that has the length of 5 for one of its sides area is: " << area << endl;

	cout << "The cube that has the length of 5 for one of its sides volume is: " << volume << endl;

	return 0;

}

double square(double length) {

	return length * length;
}

double cube(double length) {

	return length * length * length;

}
	
string stringsFunction(string string1, string string2) {

	return string1 + " " + string2;
}
