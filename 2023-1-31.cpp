#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string s, ss = "lanqiao";
	int sum = 0;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++) {
		if (s[i] == 'l' && s[i + 1] == 'a' && s[i + 2] == 'n' && s[i + 3] == 'q' && s[i + 4] == 'i' && s[i + 5] == 'a' && s[i + 6] == 'o') {
			sum++;
		}
	}
	cout << sum;
	return 0;
}

