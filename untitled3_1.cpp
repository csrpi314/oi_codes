// 高精度乘法
#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int a, arr[2005], crr[2010] = {0}, len;
	cin >> s >> a;
	len = s.size() - 1;
	reverse(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) {
		arr[i] = s[i] - '0';
	}
	for (int i = 0; i < s.size(); i++) {
		crr[i] = arr[i] * a + crr[i];
		crr[i + 1] = crr[i] / 10;
		crr[i] %= 10;
	}
	len++;
	if (crr[len] == 0) {len--;}
	for (int i = len; i >= 0; i--) {
		cout << crr[i] << ' ';
	}
	return 0;
}

