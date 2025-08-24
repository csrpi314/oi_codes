#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, sum1 = 0, sum2 = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr + 1, arr + n + 1, greater<int>());
	for (int i = 0; i < n; i++) {
		if (sum1 <= sum2) {
			sum1 += arr[i];
		} else {
			sum2 += arr[i];
		}
	}
	cout << max(sum1, sum2);
	return 0;
}

