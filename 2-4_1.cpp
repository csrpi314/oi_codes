#include <bits/stdc++.h>
using namespace std;
int main() {
	string arr[100];
	int  i = 1;
	while (cin >> arr[i]){
		i++;
	}
	for(int j = i; j >= 1; j--) {
		cout << arr[j] << ' ';
	}
	return 0;
}

