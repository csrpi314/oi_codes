#include <iostream>

using namespace std;

bool arr[10005];
int prime[10005], n = 0;

void E_sieve(int n) {
    bool isPrime[n + 5];
    isPrime[0] = isPrime[1] = 1;
    for (int i = 2; i * i <= n; i++) {
        if (!arr[i]) {
            for (int j = i * i; j <= n; j += i) {
                arr[j] = 0;
            }
        }
    }
}

void findPrimesWithSum(int n) {
    int tflag = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[n - prime[i] - prime[j]]) {
                cout << prime[i] << " " << prime[j] << " " << n - prime[i] - prime[j];
                tflag = 1;
                break;
            }
        }
        if (tflag == 1) {
            break;
        }
    }
}

int main() {
    int N;
    cin >> N;

    E_sieve(N);

    findPrimesWithSum(N);

    return 0;
}