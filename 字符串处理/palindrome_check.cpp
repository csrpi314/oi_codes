/*笔记：
  1.str.substr(a, b)	a:Start b:Len
  2.reverse(str.begin(), s.end())
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1;
	getline(cin, s1);
	string s2 = s1;
	reverse(s1.begin(), s1.end());
	if (s1 == s2) {
		cout << "YES";
	} else {
			cout << "NO";
	}
	return 0;
}

