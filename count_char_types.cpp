/*�ʼǣ� 
	1.���ַ������ȣ�str.size()��strlen(str)
	2.�����ַ�������ָ�ַ����飩��scrcpy(str)
	3.ƴ���ַ����飺scrcat(str1, str2)
*/
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int a = 0, b = 0, c = 0, d = 0,e = 0;	// a,b,c,d�ֱ�Ϊ��д��ĸ��Сд��ĸ���ո����֣������ַ���<>,.?/:;"'{}[]\|~!@#$%^&*()_+-=�� 
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
	cout << "��д��ĸ��" << a << " ��\nСд��ĸ��" << b << " ��\n��    ��" << c << " ��\n��    �֣�" << d << " ��\n�����ַ���" << e << " ��\n"; 
	return 0;
}

