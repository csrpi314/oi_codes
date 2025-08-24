// 高精度除法
#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int t;
	cin >> s >> t;
	long long a[10001], b[10001], c = 0;
	int len = s.size();
	for (int i = 0; i < len; i++) {
		a[i] = s[i] - '0';
	}
	for (int i = 0; i < len; i++) {
		b[i] = (c * 10 + a[i]) / t;
		c = (c * 10 + a[i]) % t;
	}
	while (b[len] == 0 && len < s.size() - 1) {
		len++;
	}
	for (int i = len; i < s.size(); i++) {
		cout << b[i];
	}
	return 0;
}

