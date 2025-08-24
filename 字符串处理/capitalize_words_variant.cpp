#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		if (s[i][0] >= 97 && s[i][0] <= 122) {
			s[i][0] -= 32;
		}
		for (int j = 1; j < s[i].size(); j++) {
			if (s[i][j] >= 65 && s[i][j] <= 90) {
				s[i][j] += 32;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << s[i];
	}
	return 0;
}

