/*
 * VectorOperations.cpp
 *
 *  Created on: 1 Nov 2020
 *      Author: Lenovo
 */

#include "VectorOperations.h"
#include<iostream>
#include<vector>
#include<cctype>
#include <algorithm>
using namespace std;
Vector_Operations::Vector_Operations() {
	// TODO Auto-generated constructor stub

}
void Vector_Operations::exer_332_13() {
	vector<int> in_vec;
	vector<int>::size_type vec_size;
	int in_int, prev { 0 }, next { prev + 1 }, temp_sum { 0 };
	while (cin >> in_int) {
		in_vec.push_back(in_int);
	}
	vec_size = in_vec.size();
	while (next != vec_size) {
		if (in_vec[prev] % 2 != 0 or in_vec[next] % 2 != 0) {
			cout << "Odd: " << in_vec[prev] << "\n";
			prev++;
			next++;
		}
		//continue;
		else {
			temp_sum = in_vec[prev] + in_vec[next];
			cout << "Sum: " << temp_sum << "\n";
			prev++;
			next++;
			//continue;
		}
	}
}
void Vector_Operations::exer_332_14() {
	vector<string> in_vec;
	string word;
	while (cin >> word) {
		transform(word.begin(), word.end(), word.begin(), ::toupper); //converting every word to uppercase uses algorithm from stl
		in_vec.push_back(word);
	}
	vector<string>::size_type str_len;
	vector<string>::size_type i { 0 };
	int line_size = 0;
	str_len = in_vec.size();
	while (i != str_len) {
		if (line_size != 8) {
			cout << in_vec[i] << "\t";
			i++;
			line_size++;
		} else {
			cout << endl;
			line_size = 0;
		}
	}
}
