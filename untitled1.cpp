#include <bits/stdc++.h>
using namespace std;
int main() {
	int max_len = 0, a = 0, sum = 0, arr[100] = {};
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int s1_len = s1.size(), s2_len = s2.size();
	if (s2_len > s1_len) {
		string tmp = s1; s1 = s2; s2 = tmp;
	}
	for (int i = 0; i < s1_len; i++) {
		for (int j = 0; j < s2_len; j++) {
			while (s1[i] == s2[j] && i < s1_len && j < s2_len) {
				sum++; i++; j++;
			}
			arr[a] = sum; a++; sum = 0;
		}
	}
	for (int i = 0; i <= a; i++) {
		if (arr[i] > max_len) {
			max_len = arr[i];
		}
	}
	cout << max_len;
	return 0;
}

