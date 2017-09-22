//1.�ǵ�Ҫ����using namespace  std::placeholder;
//2.bind���ǽ������Ĳ��ֲ�����ֵ���ϣ�ʹ����ӵ�в�ͬ������ġ���ͬ��������
//3.size_type����Ϊstring::size_type��

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