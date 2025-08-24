#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	s = ' ' + s;
	int len = s.size();
	int pos1 = len - 1, pos2;
	for(int i = len - 1; i >= 0; i--) {
		if (s[i] == ' ') {
			pos2 = i + 1;
			for(int j = pos2; j <= pos1; j++) {
				cout << s[j];
			}
			cout << ' ';
			pos1 = i - 1;
		}
	}
	return 0;
}

