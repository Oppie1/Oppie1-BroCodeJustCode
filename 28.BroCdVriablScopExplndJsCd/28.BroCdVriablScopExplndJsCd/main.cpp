#include<iostream>
using namespace std;




void printNum1(int myNum1);

void printNum2(int myNum2);

int printNum3 = 678;

int main()
{

	
	int myNum = 7;

	cout << "My num is " << myNum << '\n' << endl;

	printNum1(myNum);


	printNum2(myNum);

	cout << "Print global var " << printNum3 << endl;

	return 0;

}


void printNum1(int myNum1) {

	int localVar = 3;

	cout <<"I am the local var: " << localVar << endl;

}


void printNum2(int myNum2) {

	int localVar2 = 999;

	cout << "I am the local var: " << localVar2 << endl;

}