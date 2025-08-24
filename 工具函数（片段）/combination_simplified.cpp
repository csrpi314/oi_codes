#include <bits/stdc++.h>
using namespace std;
int main() {
	int m, n, sum = 1;
	cin >> m >> n;
	for (int i = m; i > n; i--) {
		sum *= m;
		m--;
	}
	cout << sum;
	return 0;
}

