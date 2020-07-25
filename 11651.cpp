#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <deque>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
typedef struct point {
	int x;
	int y;
};
bool check(const point &s1, const point &s2) {
	if (s1.y == s2.y) {
		return s1.x < s2.x;
	}
	return s1.y < s2.y;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<point> pu;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		point a;
		cin >> a.x >> a.y;
		pu.push_back(a);
	}
	sort(pu.begin(), pu.end(), check);
	vector<point>::iterator iter;
	for (iter = pu.begin(); iter != pu.end(); iter++) {
		printf("%d %d\n", (*iter).x, (*iter).y);
	}
	return 0;
}
