#include<iostream>
using namespace std;



int main()
{

	//Create a char variable named grade without initial value to store what the user types.
	//CODE:
	char grade;

	cout << "What is your grade?" << endl;

	//Read the user's input and save it into the grade variable.
	//CODE:
	cin >> grade;

	//Set up a switch block that examines the grade variable. Each case should check for letter grades
	//(A through F) using single quotes, display a message about their performance, and include a break
	//to stop execution from continuing to the next case.
	//CODE:
	switch (grade) {

	case 'A': cout << "A";
		break;
	case 'B':cout << "B";
		break;
	case 'C':cout << "C"; break;

	case 'D': cout << "C"; break;
	case'F':cout << "F"; break;

	default:cout << "You hit wrong key";



	}
}
