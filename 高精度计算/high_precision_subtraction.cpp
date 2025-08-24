// 高精度减法
#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2;
	int a[505], b[505], c[505];
	bool negative = true;
	cin >> s1 >> s2;
	int len = s1.size() - 1;
	if (s1.size() < s2.size() || s1.size() == s2.size() && s1 < s2) {
		swap(s1, s2);
		negative = false;
	}
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	for (int i = 0; i < s1.size(); i++) {
		a[i] = s1[i] - '0';
	}
	for (int i = 0; i < s2.size(); i++) {
		b[i] = s2[i] - '0';
	}
	for (int i = 0; i < s1.size(); i++) {
		if (a[i] < b[i]) {
			a[i + 1]--;
			a[i] += 10;
		}
		c[i] = a[i] - b[i];
	}
	while (a[len] == 0 && len > 0) {
		len--;
	}
	if (negative = false) {
		cout << '-';
		for (int i = s1.size() - 1; i >= 0; i--) {
			cout << c[i];
		}
	} else {
		for (int i = s1.size() - 1; i >= 0; i--) {
			cout << c[i];
		}
	}
	return 0;
}

