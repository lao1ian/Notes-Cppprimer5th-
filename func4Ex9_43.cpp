bool isOver(const string::iterator &cur, const string &si, const string &OldVali) {
	for (size_t cnt = 0; cnt != OldVali.size(); ++cnt) {
		if (cur == si.end() - cnt)
		{
			return false;
		}
	}
	return true;
}
