#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a, sum = 0;
	cin >> n;
	int arr[n], brr[n];
	for (int i = 0; i < n; i++) {
		brr[i] = i;
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swap(brr[j], brr[j + 1]);
			}
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a;
		int L = 1, R = n, mid;
		while (L <= R) {
			mid = (L + R) / 2;
			if (a > arr[mid]) {
				L = mid + 1;
			} else if (a < arr[mid]) {
				R = mid - 1;
			} else {
				sum = brr[mid];
				break;
			}
		}
		cout << sum;
		sum = 0;
	}
	return 0;
}

