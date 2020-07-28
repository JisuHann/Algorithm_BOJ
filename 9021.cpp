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
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int a[12];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,tmp;
	cin >> n;
	a[0] = 1, a[1] = 1, a[2] = 2, a[3] = 4;
	for (int i = 4; i < 12; i++) {
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}
	for (int k = 0; k < n; k++) {
		cin >> tmp;
		printf("%d\n", a[tmp]);
	}
	return 0;
}
