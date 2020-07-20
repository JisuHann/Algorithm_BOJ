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
bool is_prime(int n) {
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int i = a / 2; i >= 1; i--) {
			if (is_prime(i) && is_prime(a - i)) {
				printf("%d %d\n", i, a-i);
				break;
			}
		}
	}
	

	return 0;
}
