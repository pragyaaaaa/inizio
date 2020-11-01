/*
 * Meeting.cpp
 *
 *  Created on: 1 Nov 2020
 *      Author: Lenovo
 To learn: 	lambda expressions
 how to sort a vector of objects based on attribute of object.
 */

#include "Meeting.h"

Meeting::Meeting() :
		start_time(0), end_time(0) {
	// TODO Auto-generated constructor stub

}
Meeting::Meeting(unsigned int start_time_, unsigned int end_time_) :
		start_time(start_time_), end_time(end_time_) {

}
unsigned int Meeting::get_start_time() const {
	return start_time;
}
void Meeting::set_start_time(unsigned int start_time_) {
	start_time = start_time_;
}
unsigned int Meeting::get_end_time() const {
	return end_time;
}
void Meeting::set_end_time(unsigned int end_time_) {
	end_time = end_time_;
}
bool Meeting::operator==(const Meeting &other) const {
	return start_time == other.start_time && end_time == other.end_time;
}
