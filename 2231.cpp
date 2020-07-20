#include <stdio.h>
#include <string>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#pragma warning(disable:4996)                                                                      
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int a = i;
		int k = a;
		while (a != 0) {
			k += a % 10;
			a = a / 10;
		}
		if (k == n) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");

	return 0;
}
