#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, cot = 0;
	cin >> n;
	int arr[n], brr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			cot++;
			brr[cot] = arr[i];
		}
	}
	sort(brr + 1, brr + cot, greater<int>());
	for (int i = 0; i < cot; i++) {
		cout << brr[i] << ' ';
	}
	return 0;
}

