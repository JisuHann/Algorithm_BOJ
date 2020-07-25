#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <deque>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	if (n == 1) {
		printf("666");
	}
	else {
		int cnt = 1;
		for (int l = 667; ;l++) {
			string ch = to_string(l);
			if (ch.find("666")!=string::npos) {
				cnt++;
			}
			if (cnt == n) {
				printf("%d", l);
				return 0;
			}
		}
	}
	return 0;
}
