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
	for (int i = 0; i < n; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		if (r1 + r2 < d) {
			printf("0\n");
		}
		else if (abs(r1 - r2) > d) {
			printf("0\n");
		}
		else if (d == 0 && r1 == r2) {
			printf("-1\n");
		}
		else if (d == (r1 + r2)) {
			printf("1\n");
		}
		else if (d == abs(r1 - r2)) {
			printf("1\n");
		}
		else {
			printf("2\n");
		}

	}

	return 0;
}
