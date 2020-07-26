//C++ STL library using priority_queue (greater, less)

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
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int, vector<int>, less<int> > a;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp == 0) {
			if (a.size()) {
				printf("%d\n", a.top());
				a.pop();
			}
			else {
				printf("0\n");
			}
		}
		else {
			a.push(tmp);

		}
	}

	return 0;
}
