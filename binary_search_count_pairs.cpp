#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, a[200005];
    long long ans = 0;
    cin >> n >> c;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        int x = a[i] + c;
        
        // 查找左边界，答案记录在 L 中
        int L = i + 1, R = n;
        while (L <= R) {
            int mid = (L + R) / 2;
            if (a[mid] >= x) {
                R = mid - 1;
            } else {
                L = mid + 1;
            }
        }
        int ans_L = L;
        
        // 查找右边界
        L = i + 1, R = n;
        while (L <= R) {
            int mid = (L + R) / 2;
            if (a[mid] > x) {
                R = mid - 1;
            } else {
                L = mid + 1;
            }
        }
        int ans_R = R;
        
        if (ans_L <= ans_R && a[ans_L] == x) {
            ans += (ans_R - ans_L + 1);
        }
    }
    cout << ans << endl;
    
    return 0;
}