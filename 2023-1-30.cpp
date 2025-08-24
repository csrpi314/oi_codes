/*笔记： 
	1.求字符串长度：str.size()，strlen(str)
	2.复制字符串（尤指字符数组）：scrcpy(str)
	3.拼接字符数组：scrcat(str1, str2)
*/
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int a = 0, b = 0, c = 0, d = 0,e = 0;	// a,b,c,d分别为大写字母，小写字母，空格，数字，其他字符（<>,.?/:;"'{}[]\|~!@#$%^&*()_+-=） 
	string s;
	// int arr[100] = [33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 58, 59, 60, 61, 62, 63, 64, 91, 92, 93, 94, 95, 96, 123, 124, 125, 126];
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			a++;
		} else if (s[i] >= 97 && s[i] <= 122) {
			b++;
		} else if (s[i] == 32) {
			c++;
		} else if (s[i] >= 48 && s[i] <= 57) {
			d++;
		} else {
			e++;
		}
	}
	cout << "大写字母：" << a << " 个\n小写字母：" << b << " 个\n空    格：" << c << " 个\n数    字：" << d << " 个\n其他字符：" << e << " 个\n"; 
	return 0;
}

