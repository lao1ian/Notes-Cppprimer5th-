//1.ans��һ���ɵ��ö��󣬲���һ��ֵ�������ں�����
//2.Ϊʲô����λ�÷������ͣ�����˵һ��lambda�����return����������κ���䣬����������ٶ���lambda����void��
//Answer:ò������C++14 ����C++17��,ȡ���� ֻ��һ�仰�����ơ�

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int local_val = 7;
	auto ans = [&local_val]()->bool{
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

