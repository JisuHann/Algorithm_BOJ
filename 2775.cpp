#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <deque>
#include <stack>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tst,k, n;
	cin >> tst;
	int a[15][15];
	for (int i = 1; i <= tst; i++) {
		cin >> k >> n;
		for (int l = 1; l <= n; l++) {
			a[0][l] = l;
		}
		for (int l = 1; l <= k; l++) {
			for (int h = 1; h <= n; h++) {
				int sum = 0;
				for (int u = 1; u <= h; u++) {
					sum += a[l - 1][u];
				}
				a[l][h] = sum;
			}
		}
		printf("%d\n", a[k][n]);

	}
	

	return 0;
}
