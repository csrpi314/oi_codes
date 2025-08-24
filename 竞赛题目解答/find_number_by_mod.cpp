#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, q;
	long long b[1005], x[1005], tmp[1005], xc[1005];
	cin >> n >> q;
	for (int i = 1; i <= 1005; i++) {
		tmp[i] = 1;
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	sort(b + 1, b + n + 1);
	for (int i = 1; i <= q; i++) {
		cin >> xc[i] >> x[i];
		for (int j = 1; j <= xc[i]; j++) {
			tmp[i] *= 10;
		}
	}
	for (int i = 1; i <= q; i++) {
		for (int j = 1; j <= n; j++) {
			if (b[j] % tmp[i] == x[i]) {
				cout << b[j] << endl;
				break;
			} else if (j == n) {
				cout << "-1" << endl;
				break;
			}
		}
	}
}
