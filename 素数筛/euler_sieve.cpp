#include <bits/stdc++.h>

using namespace std;

int primes[10005], cnt;
bool vis[10005];
void euler_sieve(int n) {
    for (int i = 2; i <= n; i++) {
        if (!vis[i]) {
            primes[cnt++] = i;
        }
        for (int j = 0; j <= cnt; j++) {
            if (i * primes[j] > n) {
                break;
            }
            vis[i * primes[j]] = 1;
            if (i % primes[j] == 0) {
                break;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    euler_sieve(n);
    for (int i = 0; i < cnt; i++) {
        cout << primes[i] << ' ';
    }
}
