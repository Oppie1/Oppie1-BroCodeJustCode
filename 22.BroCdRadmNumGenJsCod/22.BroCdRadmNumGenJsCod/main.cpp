#include<iostream>
using namespace std;



int main() {


	srand(time(0));

	int num1 = (rand() % 6) + 1;
	int num2 = (rand() % 6) + 1;
	int num3 = (rand() % 6) + 1;

	cout << "Dice roll 1: " << num1 << endl;
	cout << "Dice roll 2: " << num2 << endl;
	cout << "Dice roll 3: " << num3 << endl;

}