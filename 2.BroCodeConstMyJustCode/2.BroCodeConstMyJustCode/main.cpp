#include<iostream>
using namespace std;


//The 'const' keyword makes a variable read-only, preventing its value from being modified after
//declaration. Use 'const' whenever a variable's value is know upfront and should never be changed
//throughout the program.

int main() {

	
	 const double PI = 3.14259;
	 const int LIGHT_SPEED = 299792458;
	 const int WIDTH = 1920;
	const int HEIGHT = 1080;

	double radius = 10;
	double circumference = 2 * PI * radius;

	//Print the calculated circumference to the console.
	//CODE:
	cout << "The circumference is: " << circumference << endl;

	//Print the speed of light (in m/s) to the console.
	//CODE:
	cout << "The speed of light is: " << LIGHT_SPEED << endl;

}