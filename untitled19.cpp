#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
	int res = 0;
	while (x > 0) {
		res = res * 10 + x % 10;
		x /= 10;
	}
	return res;
}
bool cmp(int a, int b) {
	int x = a, y = b, z = 0;
	while (x > 0) {
		z = z * 10 + x % 10;
		x /= 10;
	}
	x = a;
	y = b;
	while (y > 0) {
		z = z * 10 + y % 10;
		y /= 10;
	}
	y = b;
	while (y > 0) {
		z = z * 10 + y % 10;
		y /= 10;
	}
	return z < x;
}
int main() {
	int x, y, n;
	cin >> x >> y;
	n = y - x + 1;
	int arr[n], tmp;
	for (int i = 0; i < n; ++i) {
		arr[i] = x + i;
	}
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - 1 - i; ++j) {
			if (cmp(arr[j], arr[j + 1])) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
		if ((i + 1) % 2 == 0) {
			cout << endl;
		}
	}
	if (n % 2 != 0) {
		cout << endl;
	}
	return 0;
}

