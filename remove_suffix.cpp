#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	if (s.find("er", s.size() - 2) != -1) {
		s = s.substr(0, s.size() - 2);
	} else if(s.find("ly", s.size() - 2) != -1) {
		s = s.substr(0, s.size() - 2);
	} else if (s.find("ing", s.size() - 2) != -1) {
		s = s.substr(0, s.size() - 3);
	}
	cout << s;
	return 0;
}

