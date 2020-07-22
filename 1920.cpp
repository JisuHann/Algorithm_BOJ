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
int check[100001];	int n, m;
void binary_search(int a) {
	int start = 0;
	int end = n - 1;
	int mid;
	while (end - start >= 0) {
		mid = (start + end) / 2;
		if (check[mid] == a) {
			printf("1\n");
			return;
		}
		else if (check[mid] > a) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	printf("0\n");
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	int find[100001];
	for (int i = 0; i < n; i++) {
		cin >> check[i];
	}
	sort(check, check + n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> find[i];
		binary_search(find[i]);
	}
	return 0;
}
