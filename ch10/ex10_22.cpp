//1.记得要声明using namespace  std::placeholder;
//2.bind就是将函数的部分参数用值填上，使其变成拥有不同参数表的“相同”函数。
//3.size_type必须为string::size_type。

#include "stdafx.h"
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>


using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz) {
	return s.size() <= sz;
}

int main() {
	string::size_type sz;
	while (cin>> sz)
	{
		auto isLesser = bind(check_size, _1, sz);
		vector<string> authors{ "Mooophy", "pezy", "Queequeg90", "shbling", "evan617", "lian" };
		cout << count_if(authors.begin(), authors.end(), isLesser) << endl;
	}
}