#include <iostream>
using namespace std;

void bsl(int a[], int n, int x) {
    int L = 0, R = n - 1;
    while (L <= R) {
		int mid = (L + R) / 2;
		if (a[mid] >= x) {
			R = mid - 1;
		} else {
			L = mid + 1;
		}
	}
	cout << L << endl;
}

void bsr(int a[], int n, int x) {
    int L = 0, R = n - 1;
    while (L >= R) {
		int mid = (L + R) / 2;
		if (a[mid] >= x) {
			R = mid - 1;
		} else {
			L = mid + 1;
		}
	}
	cout << R << endl;
}

int main() {
    int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
    //
    return 0;
}
