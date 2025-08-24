#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string a[n + 1];
	int b[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	string old_a[n + 1], young_a[n + 1];
	int old_b[n + 1], young_b[n + 1];
	int sumo = 1, sumy = 1;
	for (int i = 1; i <= n; i++) {
		if (b[i] >= 60) {
			old_a[sumo] = a[i];
			old_b[sumo] = b[i];
			sumo++;
		} else {
			young_a[sumy] = a[i];
			young_b[sumy] = b[i];
			sumy++;
		}
	}
	for (int i = 1; i < sumo; i++) {
		for (int j = 1; j < sumo; j++) {
			if (old_b[j] < old_b[j + 1]) {
				swap(old_b[j], old_b[j + 1]);
				swap(old_a[j], old_a[j + 1]);
			}
		}
	}
	for (int i = 1; i <= sumo; i++) {
		cout << old_a[i] << endl;
	}
	for (int i = 1; i <= sumy; i++) {
		cout << young_a[i] << endl;
	}
	return 0;
}

