#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1;
	getline(cin, s1);
	int len = s1.size();
	for(int chang = 1; chang <= len; chang++){
		for(int i = 0; i + chang - 1 <= len - 1; i++){
			string s2 = s1.substr(i, chang);
			string s3 = s2;
			reverse(s2.begin(), s2.end());
			if (s2 == s3) {
				cout << s2 << ' ';
			}
		}
	}
	return 0;
}

