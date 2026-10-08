#include<iostream>
using namespace std;



int main() {


	int grade = 77;

	grade <= 60 ? cout << "You pass\n" : cout << "You fail\n";

	int number = 9;

	number % 2 ? cout << "ODD\n" : cout << "EVEN\n";

	bool hungry =  true;
	
	hungry ? cout << "You're hungry\n" : cout << "You're not hungry\n";

	cout << (hungry ? "You're hungry " : "You're not hungry");

}