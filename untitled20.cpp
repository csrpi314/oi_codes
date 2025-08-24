#include <iostream>
using namespace std;

int reverse(int num) {
	int result = 0;
	while (num) {
		result = result * 10 + num % 10;
		num /= 10;
	}
	return result;
}

int main() {
	int n, num;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[i] = reverse(num);
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}

