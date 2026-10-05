#include<iostream>
using namespace std;


namespace first {

	int x = 1;

}


namespace second {

	int x = 2;

}


namespace third {

	int x = 3;

}

int main() {
	
	int x = 0;

	cout << " x = " << x << endl;

	cout<< first::x << endl;
	cout << second::x << endl;

	using namespace::third;

	cout << x << endl;
	cout << third::x << endl;

}