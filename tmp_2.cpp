#include <iostream>

using namespace std;

bool isPrime(int num);
void fptp(int n);

bool isPrime(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void fptp(int n) {
    int pp = 3;
    for (int i = 5; i <= n; i += 2) {
        if (isPrime(i)) {
            if (i - pp == 2) {
                cout << pp << ' ' << i << endl;
            }
            pp = i;
        }
    }
}

int main() {
    int n;
    cin >> n;
    fptp(n);
    return 0;
}

