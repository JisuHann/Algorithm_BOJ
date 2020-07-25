#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <deque>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
deque<int> a;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a[101];
	int n,M;
	cin >> n >> M;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int l = i + 1; l < n; l++) {
			for (int m = l + 1; m < n; m++) {
				int sum = a[i] + a[l] + a[m];
				if (sum <= M) {
					if (M- result > M - sum) {
						result = sum;
					}
				}

			}
		}
	}
	printf("%d", result);
	return 0;
}
