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
string rev_str(std::string in_str) {
	string::size_type str_len = in_str.size(), start { 0 }, end { str_len - 1 };
	while (start < end) {
		swap(in_str[start++], in_str[end--]);
	}
	return (in_str);
}

int main() {
	/*vector<Meeting> ou_v;
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
	 }*/
	cout << "Rev: " << rev_str("Pragya");
	return (0);
}
