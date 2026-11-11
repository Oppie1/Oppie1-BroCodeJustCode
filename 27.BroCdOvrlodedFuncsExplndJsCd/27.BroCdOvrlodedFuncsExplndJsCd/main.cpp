#include<iostream>
using namespace std;



void bakePizza();

void bakePizza(string topping1);

void bakePizza(string topping1, string topping2);

int main() {

	bakePizza();
	
	bakePizza("mushroom");

	bakePizza("sausage", "pepperoni");
}


void bakePizza() {

	cout << "You got a plain pizza" << endl;
}

void bakePizza(string topping1) {

	cout << "You got a " << topping1 << " pizza" << endl;
}

void bakePizza(string topping1, string topping2) {

	cout << "You got a " << topping1 << " and " << topping2 << " pizza" << endl;
}