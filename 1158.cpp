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
int list[5001] = { 0, };
int n, k;
int where = 1;
void move() {
	for (int i = 1; i <= k - 1; i++) {
		if (list[where] == 1) {
			i--;
		}
		where++;
		if (where > n) {
			where = 1;
		}
	}
	while (list[where] == 1) {
		where++;
		if (where > n) {
			where = 1;
		}
	}
	printf("%d", where);
	list[where++] = 1;
	if (where > n) {
		where = 1;
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> k;
	int del = 0;
	printf("<");
	while (del != n-1) {
		move();
		printf(", ");
		del++;
	}
	move();
	printf(">");
	

	return 0;
}
