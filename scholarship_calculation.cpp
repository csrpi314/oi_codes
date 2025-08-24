#include <bits/stdc++.h>
using namespace std;
int main() {
    int tmp = 0, n, sum = 0, max = 0, score1, score2, num;
    string name, bestname;
    char c1, c2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> score1 >> score2 >> c1 >> c2 >> num;
        tmp = 0;
        if ((score1 > 80) && (num > 0)) {
			tmp += 8000;
		}
        if ((score1 > 85) && (score2 > 80)) {
			tmp += 4000;
		}
        if (score1 > 90) {
			tmp += 2000;
		}
        if ((c2 == 'Y') && (score1 > 85)) {
			tmp += 1000;
		}
        if ((c1 == 'Y') && (score2 > 80)) {
			tmp += 850;
		}
        sum += tmp;
        if (tmp > max) {
            max = tmp;
            bestname = name;
        }
    }
    cout << bestname << endl;
    cout << max << endl;
    cout << sum << endl;
    return 0;
}

