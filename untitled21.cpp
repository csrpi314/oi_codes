/**
 * @File untitled21.cpp 
 * @Brief: 近似排序
		   问题描述
		   读入一对正整数，将这两个数之间（包括这两个数本身）的所有数按下述特别规则排序后输出，该特别规则是按两数倒过来的值进行比较决定其大小，如30倒过来为3,29倒过来为92，则29大于30。
		   输入格式
		     ◆一行两个正整数x和y,用一个空格隔开。
		     ◆1<=x<=y<=10000,y-x<=100
		   输出格式
		     ◆包括y-x+1个整数，每两个整数用空格间隔，按两数到过来的值进行比较决定其大小，然后由小到大输出。
		   输入样例
		   22 39
		   输出样例
		   30 31 22 32 23 33 24 ...
 * @Version: 0.1 (latest)
 * @Copyright: None
 * @Author: xiaodizhuxusuan
 * @Date: 2023-06-04
 * 
 **/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	int n = y - x + 1;
	int arr[105], brr[105];
	for (int i = 1; i <= n; i++) {
		arr[i] = brr[i] = x++;
	}

	int crr[105] = {};
	for (int i = 1; i <= n; i++) {
		crr[i] = 0;
		while (brr[i] != 0) {
			int end = brr[i] % 10;
			crr[i] = crr[i] * 10 + end;
			brr[i] = brr[i] / 10;
		}
	}

	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= n - i; j++) {
			if (crr[j] > crr[j + 1]) {
				swap(crr[j], crr[j + 1]);
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}

