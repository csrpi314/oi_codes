#include <bits/stdc++.h>

using namespace std;

int n, c, a[100005];

int bsl(int L, int R, int x) {
    while (L < R) {
        int mid = (L + R) / 2;
        if (a[mid] >= x) R = mid;
        else L = mid + 1;
    }
    return L;
}

int bsr(int L, int R, int x) {
    while (L < R) {
        int mid = (L + R) / 2;
        if (a[mid] <= x) L = mid;
        else R = mid - 1;
    }
    return L;
}

int main() {
    cin >> n >> c;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        int L = bsl(1, i - 1, a[i] - c);
        int R = bsr(i + 1, n, a[i] - c);
        if (a[L] == a[i] - c) ans += L - 1;
        else ans += L;
        if (a[R] == a[i] - c) ans += n - R;
        else ans += n - R + 1;
    }
    cout << ans / 2 << endl;
    return 0;
}
