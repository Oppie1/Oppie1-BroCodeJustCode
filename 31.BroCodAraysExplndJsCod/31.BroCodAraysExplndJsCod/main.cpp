#include<iostream>
using namespace std;


int main() {

	string car = "Corolla";

	cout << car << endl;

	string cars[] = { "Rav4","Highlander","Scion" };

	cout << cars[0] << endl;
	cout << cars[1] << endl;
	cout << cars[2] << endl;

	string cars2[3];

	cars2[0] = "F150";
	cars2[1] = "Eagle";
	cars2[2] = "Ram";


	cout << cars2[0] << '\n';
	cout << cars2[1] << '\n';
	cout << cars2[2] << '\n';

	double prices[]{ 5.34, 6.39,7.77,2.13 };


	for (int i = 0; i < 4; i++) {

		cout << prices[i] << endl;
	}

}