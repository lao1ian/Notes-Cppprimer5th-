#include "stdafx.h"
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
#include<iostream>

using namespace std;

bool isMore(const string &s) {
	return s.size() >= 5;
}

int main()
{
	vector<string> v1 = { "12", "12345", "23456", "345678", "123" };
	vector<string> v2(5);
	vector<string>::iterator ret = partition(v1.begin(), v1.end(), isMore);
	for (auto it = v1.cbegin(); it != ret; ++it) std::cout << *it << " ";
	cout << endl;
	
	return 0;
}
// 必须使用返回的迭代器，否则是无效迭代器。
