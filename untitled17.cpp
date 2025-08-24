#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n], brr[n];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		brr[i] = abs(arr[i] - arr[i + 1]);
	}
	sort(brr + 1, brr + n);
	for (int i = 1; i < n; i++) {
		if (brr[i] != i) {
			cout << "Not jolly";
			exit(0);
		}
	}
	cout << "Jolly";
	return 0;
}

