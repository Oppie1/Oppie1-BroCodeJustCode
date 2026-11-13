#include<iostream>
#include <string>
using namespace std;



int searchArray(int array[], int size, int element);

int searchArray(string foods[], int size, string myFood);

int main() {

	int numbers[] = { 1,2,3,4,5,6,7,8,9 };

	int size = sizeof(numbers) / sizeof(numbers[0]);

	int index;
	int myNum;

	cout << "Enter element to search for: " << '\n';

	cin >> myNum;

	cin.ignore(); //This clears the newline from the buffer so you can use getline(,) later

	index = searchArray(numbers, size, myNum);

	if (index != -1) {

		cout << "The myNum variable " << myNum << " is at " << index << endl;
	}

	else {

		cout << "myNum variable is not in the array" << endl;
	}

	cout << "\n\n****************************************************************\n";
	cout << "Next Example: " << endl;

	string foods[] = { "pizza", "sushi","taco" };

	int size2 = sizeof(foods) / sizeof(foods[0]);

	int index2;
	string myFood;

	cout << "\nEnter food to search for: " << '\n';

	getline(cin, myFood);

	index2 = searchArray(foods, size, myFood);

	if (index2 != -1) {

		cout << myFood << " is at index " << index2 << endl;
	}

	else {

		cout << "My food is not in the array" << endl;
	}

}

int searchArray(int array[], int size, int element) {

	for (int i = 0; i < size; i++) {

		if (array[i] == element) {

			return i;
		}
	
	}

	return-1;
}

int searchArray(string foods[], int size, string myFood) {

	for (int i = 0; i < size; i++) {

		if (foods[i] == myFood) {

			return i;
		}
	}

	return -1;
}
