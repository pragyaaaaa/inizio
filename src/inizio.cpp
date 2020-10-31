//============================================================================
// Name        : inizio.cpp
// Author      : pragyasabstracts
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ArraysOperations.h"
using namespace std;
void
array_function();
void array_function() {
	int array_in_fun[] { 1, 2, 3, 4, 5 };
	for (int i : array_in_fun) {
		std::cout << array_in_fun[i] << "\t";
	}
}
int main() {
	//array_function();
	Arrays_Operations vow;
	//vow.count_vowels_str("Pragya");
	cout << vow.count_vowels_str("Pragya");
	//int test_var { 9 };
	//cout << "test Var: " << test_var;
	return 0;
}
