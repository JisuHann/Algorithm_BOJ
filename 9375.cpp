//C++ STL map 기본 개념과 map의 iterator 개념
//vector<string> 보다는 string과 int값이 모두 있는 map 개념을 이용

#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int T, N, i, j, mul;
    string temp, key;
    map <string, int> m;
    pair<map<string, int>::iterator, bool > pr;

    cin >> T;

    for (i = 0; i < T; i++) {
        m.clear();
        mul = 1;
        cin >> N;

        for (j = 0; j < N; j++) {
            cin >> temp >> key;
            pr = m.insert(pair <string, int>(key, 1));
            if (!pr.second) m[key]++;
        }

        for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
            mul = mul * (it->second + 1);
        }

        cout << mul - 1 << endl;
    }


	return 0;
}
