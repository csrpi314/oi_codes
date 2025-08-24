// 高精度加法
#include <bits/stdc++.h>
using namespace std;
int main() {
    /*
    // 无进位
    string s1, s2;
    int a[20005], b[20005], sum[20005];
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for(int i = 0; i < s1.size(); i++){
    	a[i] = s1[i] = '0';
    }
    for(int i = 0; i < s2.size(); i++){
    	b[i] = s1[i] = '0';
    }
    int len = max(s1.size() - 1, s2.size() - 1);
    for(int i = 0; i <= len; i++){
    	sum[i] = a[i] + b[i];
    }
    */
    string s1, s2;
    int a[2005], b[2005], sum[2010] = {};
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for (int i = 0; i < s1.size(); i++) {
        a[i] = s1[i] = '0';
    }
    for (int i = 0; i < s2.size(); i++) {
        b[i] = s1[i] = '0';
    }
    int len = max(s1.size() - 1, s2.size() - 1);
    for (int i = 0; i <= len; i++) {
        sum[i] = a[i] + b[i] + sum[i];
        sum[i + 1] = sum[i] / 10;
        sum[i] %= 10;

    }
    len++;
    if (sum[len] == 0) {
        len--;
    }
    for (int i = len; i >= 0; i--) {
        cout << sum[i];
    }
    return 0;
}

