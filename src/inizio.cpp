//============================================================================
// Name        : inizio.cpp
// Author      : pragyasabstracts
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "VectorOperations.h"
#include "Meeting.h"
#include<algorithm>
using namespace std;
void
array_function();
void array_function() {
	int array_in_fun[] { 1, 2, 3, 4, 5 };
	for (int i : array_in_fun) {
		std::cout << array_in_fun[i] << "\t";
	}
}
vector<Meeting> merge_meeting(vector<Meeting> in_vec) {
	vector<Meeting>::size_type in_vec_len, idx { 0 }, vec_cnt { idx + 1 };
	vector<Meeting> result;
	in_vec_len = in_vec.size();
	sort(in_vec.begin(), in_vec.end(),
			[](const Meeting &lhs, const Meeting &rhs) {
				return lhs.get_start_time() < rhs.get_start_time();
			});
	Meeting temp;
	while (idx < in_vec_len) {
		temp = in_vec[idx];
		if ((temp.get_end_time() >= in_vec[vec_cnt].get_start_time())) {
			temp.set_end_time(in_vec[vec_cnt].get_end_time());
			result.push_back(temp);
			idx++;
			vec_cnt++;
		} else {
			result.push_back(temp);
		}
		idx++;
		vec_cnt++;
	}
	return (result);
}

int main() {
	//array_function();
	//Vector_Operations vow;
	//vow.count_vowels_str("Pragya");
	//vow.exer_332_14();
	//int test_var { 9 };
	//cout << "test Var: " << test_var;
	vector<Meeting> ou_v;
	vector<Meeting> in_v;
	in_v.push_back(Meeting(0, 1));
	in_v.push_back(Meeting(3, 5));
	in_v.push_back(Meeting(4, 8));
	in_v.push_back(Meeting(10, 12));
	in_v.push_back(Meeting(9, 10));
	cout << "before Merge: \n";

	for (Meeting m : in_v) {
		cout << "Meeting ( " << m.get_start_time() << ", " << m.get_end_time()
				<< " )\t";
		cout << endl;
	}
	ou_v = merge_meeting(in_v);
	cout << "After Merge: \n";
	for (Meeting m : ou_v) {
		cout << "Meeting ( " << m.get_start_time() << ", " << m.get_end_time()
				<< " )";
		cout << endl;
	}
	return 0;
}
