/*
 * Meeting.h
 *
 *  Created on: 1 Nov 2020
 *      Author: Lenovo
 */

#ifndef MEETING_H_
#define MEETING_H_
#include<iostream>
#include<vector>
using namespace std;
class Meeting {
private:
	unsigned int start_time;
	unsigned int end_time;
public:
	Meeting();
	Meeting(unsigned int start_time_, unsigned int end_time_);
	unsigned int get_start_time() const;
	void set_start_time(unsigned int start_time_);
	unsigned int get_end_time() const;
	void set_end_time(unsigned int end_time_);
	bool operator==(const Meeting &other) const;
};

#endif /* MEETING_H_ */
