//1.ans是一个可调用对象，不是一个值。
//2.为什么不用尾置返回类型，不是说一个lambda体包含return意外以外的任何语句，编译器都会假定此lambda返回void吗？
//Answer：貌似是在C++14 还是C++17中,取消了 只有一句话的限制。

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int local_val = 7;
	auto ans = [&local_val]{
		if (local_val)
		{
			--local_val;
			return false;
		}
		else return true;
	};
	while (!ans())
	{
		cout << local_val << endl;
	}
    return 0;
}

