#include <iostream>
using namespace std;
int main() {
	int n, max;
	cin >> n;
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = i + 1;
	}
	for (int i = 0; i < n - 1; i++) {
		max = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[max]) {
				max = j;
			}
		}
		swap(a[i], a[max]);
	}
	for (int i = 0; i < n; i++) {
		cout << b[i] << ' ' << a[i] << endl;
	}
	return 0;
}

