#include <iostream>

using namespace std;

int lb(int num[], int size, int tg) {
    if (size == 0) {
        return -1;
    }
    int L = 0;
    int R = size;

    while (L < R) {
        int mid = (L + R) / 2;
        if (num[mid] < tg) {
            L = mid + 1;
        } else {
            R = mid;
        }
    }

    if (L >= size || num[L] != tg) {
        return -1;
    }

    return L;
}


int main() {
    int n, x;
    cin >> n;

    int num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cin >> x;

    cout << lb(num, n, x);

    return 0;
}
