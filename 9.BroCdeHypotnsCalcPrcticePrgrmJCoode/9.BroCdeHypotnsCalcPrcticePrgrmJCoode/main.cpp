#include <iostream>
#include<cmath>
using namespace std;


int main() {

	double a;
	double b;
	double c;
	cout << "Enter side A ";

	cin >> a;

	cout << "\nEnter side B ";

	cin >> b;

	a = pow(a, 3);

	cout << a << endl;

	b = pow(b, 3);

	cout << b << endl;

	c = sqrt(pow(a,3) + pow(b,3));

	cout << c << endl;

	c = sqrt(a + b);

	cout << c;
	
}