#include <iostream>
#include <string>//Needed to use getline() function. 
using namespace std;


int main() {

	string foods[5];

	int size = sizeof(foods) / sizeof(foods[0]);

	string temp;

	for(int i = 0; i<size ;i++){

		cout << "Please enter 5 foods or 'q' to quit " << i + 1 << ":" << endl;

		getline(cin, temp);

		if (temp =="q") {

			break;
		}

		else {

			foods[i] = temp;
		}

	}

	cout << "You like the following foods:\n";

	for (int i = 0; !foods[i].empty(); i++) {

		cout << foods[i] << endl;
	}

	return 0;
}