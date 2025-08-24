#include <bits/stdc++.h>

using namespace std;

int dis[100000];

int check(int dist, int N, int C) {
    int ans = 1;
    int prev = dis[0];
    
    for (int i = 1; i < N; i++) {
        if (dis[i] - prev >= dist) {
            ans++;
            prev = dis[i];
        }
    }
    
    return ans;
}

int main() {
    int N, C;
    cin >> N >> C;
    
    for (int i = 0; i < N; i++) {
        cin >> dis[i];
    }
    
    sort(dis, dis + N);
    
    int L = 0;
    int R = dis[N-1] - dis[0];
    int res = 0;
    
    while (L <= R) {
        int mid = (L + R) / 2;
        
        if (check(mid, N, C) >= C) {
            res = mid;
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }
    
    cout << res << endl;
    
    return 0;
}

