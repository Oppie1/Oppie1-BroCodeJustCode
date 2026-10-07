#include <iostream>
#include <cmath>
using namespace std;


//MAKE SURE VARIABLES CORRESPOND WITH THAT ACCTUALLY IS HAPPENING IN THE CODE/COMMENTS.

int main()
{

	double a;
	double b;
	double c;
	double d = 23;
	double e = 7;
	double f = 3.78;
	double g = 3.11;
	double h = 2.33;
	double z;
	

	c = max(f, g);

	cout << c << endl;

	c = min(f, g);

	cout << c << endl;

	b = pow(2, 4);
	cout << b << endl;

	a = pow(2, 3);

	cout << a << endl;

	z = sqrt(9);
	cout << z << endl;


	b = abs(-7);
	cout << b << endl;
	
	g = round(g);

	cout << g << endl;

	h = ceil(h);
	cout << h << endl;

	f = floor(f);
	cout << f << endl;

	return 0;
}

//Reference guide for  cmath library functions
//https://www.cplusplus.com/reference/math/
//You can research other C++ libraries using same approach to discover available utility functions