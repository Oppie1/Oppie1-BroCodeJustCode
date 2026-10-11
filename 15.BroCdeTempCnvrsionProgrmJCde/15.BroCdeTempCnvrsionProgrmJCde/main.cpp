#include<iostream>
using namespace std;


int main() {


	double temp;

	char unit;

	cout << "******Temperature Conversion****** " << endl;

	cout << "F = Fahrenheit\n";
	cout << "C = Celsius\n";

	cout << "What would you like to convert to?\n";

	cin >> unit;

	
	if (unit == 'F' || unit == 'f') {

		cout << "Please enter the temp Celsius: " << endl;

		cin >> temp;

		temp = (1.8 * temp) + 32;

		cout << "Temp in Fahrenheit: " << temp << endl;
		
	}

	if (unit == 'C' || unit == 'c') {

		cout << "Please enter temp in Fahrenheit" << endl;

		cin >> temp;

		temp = (temp - 32) / 1.8;

		cout << "The temp in Celsius is: " << temp << endl;
	}
	

	cout << "******Program Ends******" << endl;

}