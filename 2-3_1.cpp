#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2, s3;
	getline(cin, s1);
	cin >> s2 >> s3;
	s1.replace(s1.find(s2), s2.length(), s3);
	cout << s1;
	return 0;
}

