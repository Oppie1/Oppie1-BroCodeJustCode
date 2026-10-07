#include <iostream>
using namespace std;



int main() {

	int x = 3.14;
	double y = 3.14;

	
	double z = (int)3.14;

	char a = 100;


	cout << x << " ";
	cout << y << endl; 

	cout << a << endl;
	

	cout << (char)100 << endl;

	int correct = 8;

	int questions = 10;

	double score1 = correct / questions * 100;

	double score2 = correct / (double)questions  * 100;

	cout << score1 << endl;
	cout << score2 << endl;

	return 0;

}