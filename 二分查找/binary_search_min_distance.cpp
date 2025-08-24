#include <bits/stdc++.h>

using namespace std;


int n, a[100005];

int check(int x) {
    int pre = 1, ans = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] - a[pre] >= x) {
            ans++;
            pre = i;
        }
    }
    return ans;
}

int main() {
    int c;
    cin >> n >> c;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int l = 0, r = 0x3f3f3f;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid) >= c) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << r << endl;
    return 0;
}