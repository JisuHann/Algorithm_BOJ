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
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	deque<int> a;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}
	while (a.size() != 1) {
		a.pop_front();
		int k = a.front();
		a.pop_front();
		a.push_back(k);
	}
	printf("%d", a.front());

	return 0;
}
