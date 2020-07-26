#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <functional>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
long long int c;
long long int pow(long long int x, long long int y) {
	if (y == 0) {
		return 1;
	}
	else if (y == 1) {
		return x;
	}
	if (y % 2 != 0) {
		return pow(x, y -1) *x;
	}
	long long int k = pow(x, y/2);
	k %= c;
	return (k * k) % c;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long int a,b;
	cin >> a>>b>>c;
	
	printf("%d", pow(a, b) % c);
	return 0;
}
