#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, k, b, y = 0, yx = 1, yy = 0, Sa = 0, Sb = 0;
    cin >> k >> b;
    y = k * x + b;
    if (k > 0 && b > 0) {
        cout << "123" << endl;
    } else if (k > 0 && b < 0) {
        cout << "134" << endl;
    } else if (k < 0 && b > 0) {
        cout << "124" << endl;
    } else if (k < 0 && b < 0) {
        cout << "234" << endl;
    } else if (k > 0 && b == 0) {
        cout << "++" << endl;
    } else if (k < 0 && b == 0) {
        cout << "-+" << endl;
    } else {
        cout << "wrong" << endl;
    }
    yx = -(1 * b) / k;
    yy = b;
    Sa = b * b / 2 / k;
    if (Sa >= 0) {
        Sb = Sa;
    } else {
        Sb = -1 * Sa;
    }
    cout << "(" << yx << ",0) " << "(" << yy << ",0) " << Sb << endl;
    return 0;

}

