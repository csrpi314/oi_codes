#include <bits/stdc++.h>

using namespace std;

// 十进制转八进制
int DtoO(int decimalNumber) {
    int octalNumber = 0, i = 1;
    
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    
    return octalNumber;
}

// 八进制转十进制
int OtoD(int octalNumber) {
    int decimalNumber = 0, i = 0;
    
    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        i++;
        octalNumber /= 10;
    }
    
    return decimalNumber;
}

// 十进制转十六进制
string DtoH(int decimalNumber) {
    string hexNumber = "";
    
    while (decimalNumber != 0) {
        int remainder = decimalNumber % 16;
        
        if (remainder < 10) {
            hexNumber = char(remainder + 48) + hexNumber;
        } else {
            hexNumber = char(remainder + 55) + hexNumber;
        }
        
        decimalNumber /= 16;
    }
    
    return hexNumber;
}

// 十六进制转十进制
int HtoD(string hexNumber) {
    int decimalNumber = 0, base = 1;
    int length = hexNumber.length();
    
    for (int i = length - 1; i >= 0; i--) {
        if (hexNumber[i] >= '0' && hexNumber[i] <= '9') {
            decimalNumber += (hexNumber[i] - 48) * base;
            base *= 16;
        } else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') {
            decimalNumber += (hexNumber[i] - 55) * base;
            base *= 16;
    }
    
    return decimalNumber;
}

