#include <iostream>

using namespace std;

int isPrime[100005], primes[100005];
void E_sieve(int n);

int main() {
    int n;
    cin >> n;
    E_sieve(n);
    for (int i = 2; i < n; i++) {
        if (isPrime[i] == 1) {
            cout << i << ' ';
        }
    }
    return 0;
}

void E_sieve(int n) {
    for (int i = 2; i <= n; ++i) {
        isPrime[i] = 1;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }
    for (int i = 2; i < n; i++) {
        if (isPrime[i] == 1) {
            cout << i << ' ';
        }
    }
}
