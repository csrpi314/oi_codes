int a[100005];
int n;
int check(int prev) {
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] <= prev) {
            continue;
        }
        ans += a[i] - prev;
    }
    return ans;
}
