#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, h, sum = 0;
	cin >> n >> h;
	int arr[n];
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr + 1, arr + n + 1, greater<int>());
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (sum >= h) {
			cout << i;
			break;
		}
	}
	return 0;
}

