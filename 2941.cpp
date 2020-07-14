#include <stdio.h>
#include <string>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
    vector<string> vec = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    int index = 0;
    string S;
    cin >> S;
    for (int i = 0; i < vec.size(); i++) {
        index = S.find(vec[i]);
        for (; index != string::npos; index = S.find(vec[i]))
            S.replace(index, vec[i].length(), "#");
    }
    cout << S.length();
}
