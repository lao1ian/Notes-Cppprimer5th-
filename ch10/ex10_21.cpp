//ans��һ���ɵ��ö��󣬲���һ��ֵ��
//Ϊʲô����λ�÷������ͣ�����˵һ��lambda�����return����������κ���䣬����������ٶ���lambda����void��

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

