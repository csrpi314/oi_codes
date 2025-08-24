#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, x;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> x;
	int L = 0;
	int R = n - 1;
	while (L <= R) {
		int mid = (L + R) / 2;
		if (x > arr[mid]) {
			L = mid + 1;
		} else if (x < arr[mid]) {
			R = mid - 1;
		} else {
			cout << "Yes. " << mid << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}

