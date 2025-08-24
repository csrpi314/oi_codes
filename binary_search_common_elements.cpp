#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, 第一个数组[100005], 第二个数组[100005];
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> 第一个数组[i];
	}
	for (int i = 1; i <= k; i++) {
		cin >> 第二个数组[i];
	}
	sort(第二个数组 + 1, 第二个数组 + k + 1);
	for (int i = 1; i <= n; i++) {
		int 左边的数 = 1, 右边的数 = k;
		while (左边的数 <= 右边的数) {
			int 中间的数 = (左边的数 + 右边的数) / 2;
			if (第二个数组[中间的数] == 第一个数组[i]) {
				cout << 第一个数组[i] << " ";
				break;
			} else if (第二个数组[中间的数] < 第一个数组[i]) {
				左边的数 = 中间的数 + 1;
			} else {
				右边的数 = 中间的数 - 1;
			}
		}
	}
	return 0;
}

