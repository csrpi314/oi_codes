// 高精度乘法
#include <bits/stdc++.h>
using namespace std;
int main() {
	// 多位数×多位数
	string s1, s2;
	cin >> s1 >> s2;
	int arr[10001], brr[10001], crr[10001], len1 = s1.size() - 1, len2 = s2.size() - 1;
	int len3 = len1 + len2 + 1;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	for (int i = 0; i < s1.size(); i++) {
		arr[i] = s1[i] - '0';
	}
	for (int i = 0; i < s2.size(); i++) {
		brr[i] = s2[i] - '0';
	}
	for (int i = 0; i < 1000; i++) {
		crr[i] = 0;
	}
	for (int i = 0; i < len1; i++) {
		for (int j = 0; j < len2; j++) {
			crr[i + j] += arr[i] * brr[j];
			crr[i + j + 1] +=crr[i + j] / 10;
			crr[i + j] %= 10;
		}
	}
	while (crr[len3] == 0 && len3 > 0) {
		len3--;
	}
	for (int i = len3; i >= 0; i--) {
		cout << crr[i];
	}
	return 0;
}

