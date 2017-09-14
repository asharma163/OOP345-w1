/* NAME-ANSHUL SHARMA
   E-MAIL- asharma163@myseneca.ca
   STUDENT # - 136530169
*/
#include<iostream>
#include"process.h"
#include<string>
#include"CString.h"
using namespace std;
using namespace w1;
int main(int argc, char* argv[]) {
	int arg = 0;
	cout << "Command Line :";
	for (arg = 0; arg < argc; arg++) {
		cout << " " << argv[arg];
	}
	cout << "\n";
	if (argc == 1) {
		cout << "Insufficient number of arguments (min 1)" << "\n";
		return -1;
	}
	else
	{
		cout << "Maximum number of characters to be stored : 3" << "\n";
		for (int j = 0; j < argc; j++) {
			process(argv[j]);
	}
		return 0;
	}
}




