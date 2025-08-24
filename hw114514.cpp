#include <iostream>

using namespace std;

bool isPrime[100005];
int primes[100005], cnt;
void E_sieve(int n) {
    for (int i = 2; i <= n; ++i) {
        if (!isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 1;
            }
            primes[cnt] = i;
            cnt++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    E_sieve(n);
    for (int i = 0; primes[i] <= n; ++i) {
        cout << primes[i] << ' ';
    }
    return 0;
}
