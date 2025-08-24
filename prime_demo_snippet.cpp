#include <iostream>

using namespace std;

bool isPrime[100005];
int prime[100005], flag[100005], cnt;

void E_sieve(int n) {
    for (int i = 2; i <= n; ++i) {
        if (!isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 1;
            }
        }
    }
}

int main() {
    int d;
    cin >> d;
    E_sieve(d);
    for (int i = 0; i < cnt; i++) {
        if (flag[prime[i] + d] && prime[i] - 1 >= d && (prime[i] + d) * (prime[i] + d) <= d) {
            cout << (prime[i] + d) * prime[i] << endl;
            break;
        }
    }
    return 0;
}