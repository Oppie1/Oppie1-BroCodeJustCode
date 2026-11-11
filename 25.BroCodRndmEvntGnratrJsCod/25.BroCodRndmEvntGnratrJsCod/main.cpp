#include<iostream>
#include<ctime>
using namespace std;


int main() {

	
	srand(time(0));

	int randNum = rand() % 5 + 1;

	switch (randNum) {

	case 1: cout << "You won shirt";
		break;
	case 2: cout << "You won money";	
		break;
	case 3: cout << "You won a computer";
		break;
	case 4: cout << "You won a vacation";
		break;
	case 5:cout << "You didnt win anything :(";
		break;
	}
	
}