/* NAME-ANSHUL SHARMA
   E-MAIL- asharma163@myseneca.ca
   STUDENT # - 136530169
*/
#pragma once
#include<iostream>
namespace w1 {
	const int MAX = 3;
	class CString {
		char str[MAX + 1];
	public:
		CString(char* ch);
		void display(std::ostream& ostr) const;
	};
	std::ostream& operator<<(std::ostream& ostr, const CString& ch);
}