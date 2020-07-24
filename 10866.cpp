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
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char cmd[10];
		int tmp;
		cin >> cmd;
		if (!strcmp(cmd, "push_back")) {
			cin >> tmp;
			a.push_back(tmp);
		}
		else if (!strcmp(cmd, "push_front")) {
			cin >> tmp;
			a.push_front(tmp);
		}
		else if (!strcmp(cmd, "pop_front")) {
			if (a.empty() != true) {
				printf("%d\n", a.front());
				a.pop_front();
			}
			else {
				printf("-1\n");
			}
		}
		else if (!strcmp(cmd, "pop_back")) {
			if (a.empty() != true) {
				printf("%d\n", a.back());
				a.pop_back();
			}
			else {
				printf("-1\n");
			}
		}
		else if (!strcmp(cmd, "size")) {
			printf("%d\n", a.size());
		}
		else if (!strcmp(cmd, "empty")) {
			if (a.empty() != true) {
				printf("0\n");
			}
			else {
				printf("1\n");
			}
		}
		else if (!strcmp(cmd, "front")) {
			if (a.empty() != true) {
				printf("%d\n", a.front());
			}
			else {
				printf("-1\n");
			}
		}
		else if (!strcmp(cmd, "back")) {
			if (a.empty() != true) {
				printf("%d\n", a.back());
			}
			else {
				printf("-1\n");
			}
		}
	}

	return 0;
}
