/* NAME-ANSHUL SHARMA
   E-MAIL- asharma163@myseneca.ca
   STUDENT # - 136530169
*/
#include "CString.h"
#include<iostream>
using namespace std;
namespace w1 {
	CString::CString(char* ch) {
		if (ch == NULL) {
			str[0] = '\0';
		}
		else {
			strncpy(str, ch, MAX);
			str[MAX] = '\0';
		}
	}
	void CString::display(std::ostream& ostr)const {
		for (int j = 0; j < MAX; j++) {
			ostr << str[j];
		}
}
	std::ostream& operator << (std::ostream& ostr, const CString& ch) {
		static int x = 0;
		cout << x << ": ";
		x++;
		ch.display(ostr);
		return ostr;
	}
}