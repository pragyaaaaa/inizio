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

/*merge meeting*/
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
/*inplace reversing of string*/
string rev_str(std::string in_str) {
	if (in_str.empty())
		return ("Null");
	string::size_type str_len = in_str.size(), start { 0 }, end { str_len - 1 };
	while (start < end) {
		swap(in_str[start++], in_str[end--]);
	}
	return (in_str);
}

vector<int> merge_vector(vector<int> vec_1, vector<int> vec_2) {
	vector<int>::size_type vec_1_len { vec_1.size() },
			vec_2_len { vec_2.size() }, start_v1 { 0 }, start_v2 { 0 };
	vector<int> result;
	while (start_v2 < vec_2_len or start_v1 < vec_1_len) {
		if (vec_1[start_v1] >= vec_2[start_v2]) {
			result.push_back(vec_2[start_v2]);
			start_v2++;
		} else {
			result.push_back(vec_1[start_v1]);
			start_v1++;
		}
	}
	return (result);

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
	vector<int> myVector { 3, 4, 6, 10, 11, 15 };
	vector<int> alicesVector { 1, 5, 8, 12, 14, 19 };
	vector<int> mergedVector = merge_vector(myVector, alicesVector);
	for (int m : mergedVector) {
		cout << m << "\t";
	}
	//cout << "Rev: " << rev_str("cake pound steal");
	return (0);
}
