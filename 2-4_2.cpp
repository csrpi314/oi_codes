#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s, arr[n];
	for(int i = 0; i < n; i++){
		cin >> s;
		int len = s.size();
		if (s[0] >= 'a' && s[0] <= 'z') {s[0] -= 32;}
		for(int j = 1; j < len; j++){
			if (s[i] >= 'A' && s[i] <= 'Z') {s[i] += 32;}
		}
		arr[i] = s;
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << endl;
	}
	return 0;
}

