/*
 * ArraysOperations.cpp
 *
 *  Created on: 31 Oct 2020
 *      Author: Lenovo
 */

#include "ArraysOperations.h"

Arrays_Operations::Arrays_Operations() {
	// TODO Auto-generated constructor stub

}
int Arrays_Operations::count_vowels_str(string in_str) {
	int count { 0 }, i { 0 }, str_len { 0 };
	str_len = in_str.length();
	char vowels[str_len];
	fill(vowels, vowels + str_len, 'N'); //initializing char array
	for (char ch : in_str) {
		if (ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U'
				or ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o'
				or ch == 'u') {
			vowels[i] = ch;
			count++;
			cout << i << "th vowel: " << vowels[i] << "\n";
			i++;

		}
	}
	cout << "Total count of vowels: " << "\t";
	return count;
}
