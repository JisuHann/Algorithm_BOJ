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
typedef struct var{
	int num;
	int abs;
} var;
struct cmp {
	bool operator () (var t, var n) {
		if (t.abs == n.abs) {
			return t.num > n.num;
		}
		return t.abs > n.abs;
	}
};

priority_queue <var, vector<var>, cmp> arr;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a[20001] = { 0, };
	int n, tmp;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		cin >> tmp;
		if (tmp != 0) {
			var tel;
			tel.num = tmp;
			tel.abs = abs(tmp);
			arr.push(tel);
		}
		else {
			if (arr.size() != 0) {
				printf("%d\n", arr.top().num);
				arr.pop();
			}
			else {
				printf("0\n");
			}
		}

	}	

	return 0;
}
