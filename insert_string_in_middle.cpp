#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int len1 = s1.size(), len2 = s2.size();
	if (len1 % 2 == 0) {
		for(int i = 0; i < len1 / 2; i++){
			cout << s1[i];
		}
		cout << s2;
		for(int i = len1 / 2; i < len1; i++){
			cout << s1[i];
		}
	}
	return 0;
}

