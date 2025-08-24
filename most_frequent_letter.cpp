#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int arr[130] = {}, maxa = 0;
	for (int i = 0; i < s.size(); i++) {
		for (int j = 97; j <= 122; j++) {
			if ((int) s[i] == j) {
				arr[j]++;
			}
		}
	}
	for (int i = 97; i <= 122; i++) {
		if (arr[i] > maxa) {
			maxa = arr[i];
		}
	}
	for (int i = 97; i <= 122; i++) {
		if (arr[i] == maxa) {
			cout << (char) i << ' ' << arr[i];
		}
	}
	return 0;
}

