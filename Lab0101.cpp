//*********************************************
// Student Name: Dilon Cowling
// Student Number: 12345678
//
// SD 121 Lab: 01 Assignment: 01
//
// Filename: lab0101.cpp
// Date submitted: 15/09/2010
//
// I hereby declare that this code, submitted
// for credit for the course SD121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// has not been knowingly plagiarized by others.
//
// Signed,
//
//
//*********************************************
//filename: lab0101.cpp
// This program uses a loop
// to calculate squares of
// integers 3 to 9
#include <iostream>
using namespace std;
int main( ){
	int j = 0;
	for ( j = 3; j < 11; j++ ){
		cout << "j = " << j << " squared = " << j * j << endl;}
	cout << "\nPrinted by: Dilon Cowling - 12345678\n";
	system("pause");
	return 0;
}

/*
j = 3 squared = 9
j = 4 squared = 16
j = 5 squared = 25
j = 6 squared = 36
j = 7 squared = 49
j = 8 squared = 64
j = 9 squared = 81
j = 10 squared = 100

Printed by: Dilon Cowling - 12345678
*/
