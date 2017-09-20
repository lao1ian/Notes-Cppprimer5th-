# Chapter 9. Sequential Containers
---
## Exercise 9.43
>9.43的补充函数  
```cpp
inline bool isEnd(size_t &cur, const string &si, const string &OldVali) {
	for (size_t cnt = 0; cnt != OldVali.size() - 1; ++cnt) {
		if (cur == si.size() - cnt) return false;
	}
	return true;
}
```
