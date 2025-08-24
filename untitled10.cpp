#include <bits/stdc++.h>
using namespace std;
int arr[105];
string str[105];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i] >> str[i];
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= n - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swap(str[j], str[j + 1]);
			}
		}
	}
	for (int i = 0; i <= n; i++) {
		cout << str[i] << endl;
	}
	return 0;
}

