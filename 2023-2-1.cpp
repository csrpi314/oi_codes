#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int len = s1.find(s2);
	if (len == -1) {
		cout << "NO";
	} else {
		cout << "YES";
	}
	return 0;
}

