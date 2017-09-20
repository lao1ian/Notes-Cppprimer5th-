#include "stdafx.h"
#include<string>
#include<iostream>


using namespace std;

inline bool isEnd(size_t &cur, const string &si, const string &OldVali) {
	for (size_t cnt = 0; cnt != OldVali.size() - 1; ++cnt) {
		if (cur == si.size() - cnt) return false;
	}
	return true;
}

void func(string &s, const string &oldVal, const string &newVal) {	
	for (size_t i = 0; isEnd(i, s, oldVal); ++i) {
		if (s.substr(i, oldVal.size())==oldVal)
		{
			s.replace(i, oldVal.size(), newVal);
			i += newVal.size() - 1;
		}
	}
}

int main()
{	
	string str{ "To drive straight thru is a foolish, tho courageous act." };
	func(str, "tho", "though");
	func(str, "thru", "through");
	func(str, "act.", "behavior!");
	cout << str << endl;
    return 0;
}
