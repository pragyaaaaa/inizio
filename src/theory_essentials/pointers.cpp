/*
 * pointers.cpp
 *
 *  Created on: 1 Nov 2020
 *      Author: Lenovo
 */

/*
Pointers:
variable_type *pointer_name {nullptr};
int *int_ptr {nullptr};: Always initialize pointers.
namespace std {
template <typename charT,
typename traits = char_traits<charT>,
typename Allocator = allocator<charT> >
class basic_string;
}
constructors
Create or copy a string
destructor
Destroys a string
=, assign()
Assign a new value
swap()
Swaps values between two strings
+=, append(), push_back()
Append characters
insert()
Inserts characters
erase(), pop_back()
Deletes characters (pop_back() since C++11)
clear()
Removes all characters (empties a string)
resize()
Changes the number of characters (deletes or appends
characters at the end)
replace()
Replaces characters
+
Concatenates strings
==, !=, <, <=, >, >=, compare()
Compare strings
empty()
Returns whether the string is empty
size(), length()
Return the number of characters
max_size()
Returns the maximum possible number of characters
capacity()
Returns the number of characters that can be held without
reallocation
reserve()
Reserves memory for a certain number of characters
shrink_to_fit()
Shrinks the memory for the current number of characters
(since C++11)
[ ], at()
Access a character
front(), back()
Access the first or last character (since C++11)
>>, getline()
Read the value from a stream
<<
Writes the value to a stream
stoi(), stol(), stoll()
Convert string to signed integral value (since C++11)
stoul(), stoull()
Convert string to unsigned integral value (since C++11)
stof(), stod(), stold()
Convert string to floating-point value (since C++11)
to_string(), to_wstring()
Convert integral/floating-point value to string (since
C++11)
copy()
Copies or writes the contents to a character array
data(), c_str()
Returns the value as C-string or character array
substr()
Returns a certain substring
find functions
Search for a certain substring or character
begin(), end()
Provide normal iterator support
cbegin(), cend()
Provide constant iterator support (since C++11)
rbegin(), rend()
Provide reverse iterator support
crbegin(), crend()
Provide constant reverse iterator support (since C++11)
get_allocator()
Returns the allocator


const string & str
The whole string str
const string & str, size_type idx,
At most, the first num characters
size_type num
of str starting with index idx
const char* cstr
The whole C-string cstr
const char* chars, size_type len
len characters of the character
array chars
char c
The character c
size_type num, char c
num occurrences of character c
const_iterator beg, const_iterator end
All characters in range [beg,end)
initlist
All characters in initlist (since C++11)

std::string s(�x�);
// ERROR
std::string s(1,�x�);
// OK, creates a string that has one character �x�
std::string s({�x�});
// OK, ditto (since C++11)

string s
Creates the empty string s
string s(str)
Copy constructor; creates a string as a copy of the
existing string str
string s(rvStr)
Move constructor; creates a string and moves the
contents of rvStr to it (rvStr has a valid state with
undefined value afterward)
string s(str,stridx)
Creates a string s that is initialized by the characters of
string str starting with index stridx
string s(str,stridx,strlen)
Creates a string s that is initialized by, at most, strlen
characters of string str starting with index stridx
string s(cstr)
Creates a string s that is initialized by the C-string cstr
string s(chars,charslen)
Creates a string s that is initialized by charslen
characters of the character array chars
string s(num,c)
Creates a string that has num occurrences of character c
string s(beg,end)
Creates a string that is initialized by all characters of the
range [beg,end)
string s(initlist)
Creates a string that is initialized by all characters in
initlist (since C++11)
s.~string()
Destroys all characters and frees the memory
*/


