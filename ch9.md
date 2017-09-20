# Chapter 9. Sequential Containers
---
## Exercise 9.43
>练习9.43的补充函数  
```cpp
bool isOver(const string::iterator &cur, const string &si, const string &OldVali) {
	for (size_t cnt = 0; cnt != OldVali.size(); ++cnt) {
		if (cur == si.end() - cnt)
		{
			return false;
		}
	}
	return true;
}
```
