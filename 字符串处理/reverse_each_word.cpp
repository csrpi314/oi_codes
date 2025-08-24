#include <bits/stdc++.h>
using namespace std;
int main() {
	string arr[100];
	int i = 1;
	while (cin >> arr[i]) {i++;}
	for(int j = 1; j <= i; j++){
		reverse(arr[j].begin(), arr[j].end());
		cout << arr[j] << ' ';
	}
	return 0;
}

