#include<iostream>
using namespace std;


int main() {

	
	int studentsClass1 = 5;
	int studentsClass2 = 10;
	int studentsClass3 = 15;
	int studentsClass4 = 20;
	int studentsClass5 = 25;
	int studentsClass6 = 30;
	int studentsClass7 = 35;
	int studentsClass8 = 40;
	int studentsClass9 = 45;
	int studentsClass10 = 50;
	int studentsClass11 = 55;
	
	
	double studentsClass12 = 100;

	int remainder = 99;

	remainder = studentsClass1 % 2;

	cout << remainder << endl;

	remainder = studentsClass1 % 3;

	cout << remainder << endl;

	studentsClass1 = studentsClass1 + 1;

	cout << studentsClass1 << endl;

	studentsClass3++;
	cout << studentsClass3 << endl;

	studentsClass4 = studentsClass4 - 2;
	cout << studentsClass4 << endl;

	studentsClass5 -= 3;
	cout << studentsClass5 << endl;

	studentsClass6--;
	cout << studentsClass6 << endl;

	studentsClass7 = studentsClass7 * 2;
	cout << studentsClass7 << endl;

	studentsClass8 *= 2;
	cout << studentsClass8 << endl;

	studentsClass9 = studentsClass9 / 2;
	cout << studentsClass9 << endl;

	studentsClass10 /= 2;
	cout << studentsClass10;

	studentsClass11 /= 3;
	cout << studentsClass11 << endl;

	studentsClass12 = studentsClass12 / 3;
	cout << studentsClass12 << endl;

	int people = 3 * 4 + 7 / 2;

	
	int people2 = 3 * (4 + 7) / 2;
	
	cout << people << " ";
	cout << people2 << endl;
	
}

//Tip: Modulus with 2 is a handy way to check if a number is even or odd.
//A remainder of 0 means even; a remainder of 1 means odd.