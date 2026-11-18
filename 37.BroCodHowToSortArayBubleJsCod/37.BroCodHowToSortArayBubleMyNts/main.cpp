#include <iostream>
using namespace std;




void sort(int array[], int size);


int main() {

	
	int array[] = { 2, 7,3,5 };

	int size = sizeof(array) / sizeof(array[0]);


	cout << "Unsorted Array:" << endl;
	for (int element : array) {

		cout << element << endl;
	}

	sort(array, size);

	cout << "Sorted array: " << endl;
	for (int element : array) {

		cout << element << " ";
	}

}

void sort(int array[], int size) {

	int temp;

	for (int i = 0; i < size - 1; i++) {


		for (int j = 0; j < size - i - 1; j++) {

			if (array[j] > array[j + 1]) {

				temp = array[j + 1];

				array[j + 1] = array[j];

				array[j] = temp;
			}
		}

	}
}

//The full explanation:

//Breaking down size - i - 1

//1. size - 1 -> Stops you from going out of bounds
//if size = 4, your valid indices are 0,1,2,3
//j < size - 1 means j<3, so j can be 0,1,2
//This prevents array[j+1] from exceeding the array bounds.

//2.The - i part -> Skips already sorted elements
// After the first pass (i=0), the largest element "bubbles" to the end.
// After the second pass (i=1), the second-largest is in place.
// So on the second pass, you don't need to check the last element again.
// 
// Example with 4 elements:
// Pass 1 (i=0): Check indices 0, 1, 2 -> j < 4-0-1 = 3
// Pass 2 (i=1): Check indices 0,1 -> j<4-1-1=2
// Pass 3 (i=2): Check index 0-> j<4-2-1 = 1.
//
		






