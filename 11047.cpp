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
	int n,left;
	int coin[10] = { 0, };
	cin >> n>>left;
	int set = n-1;
	int size = 0;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	while (left != 0) {
		int use = left / coin[set];
		left = left - use * coin[set];
//		printf("%d %d %d", coin[set], use, left);
		set--;
		size += use;
	}
	printf("%d", size);
	return 0;
}
