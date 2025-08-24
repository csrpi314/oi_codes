#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int arr[n], brr[n], d = n - 1;
	float sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		brr[i] = i;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swap(brr[j], brr[j + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << brr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		sum += arr[i] * d;
		d--;
	}
	printf("%.2f", sum / n);
	return 0;
}

