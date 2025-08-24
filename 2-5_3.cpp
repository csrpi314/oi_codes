#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int len = s.size(), pos1 = s.size(), pos2;
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ') {
			pos2 = i - 1;
			for (int j = pos2; j >= pos1; j--) {
			cout << s[j];
		}
		cout << ' ';
		pos1 = i + 1;
		}
	}
	return 0;
}

