#include<iostream>
using namespace std;



double getTotal(double prices[], int size);


int main() {


	double prices[] = { 3.44, 4.97,12.56,11.13 };

	int size = sizeof(prices) / sizeof(prices[0]);

	double totalPrice = getTotal(prices, size);

	cout << "$" << totalPrice << endl;

	return 0;
}


double getTotal(double prices[], int size) {

	double totalPrice = 0;

	for (int i = 0; i < size; i++) {



		totalPrice += prices[i];

	}

	return totalPrice;
		

}
	
