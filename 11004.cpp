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
int a[5000001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin >> n>>k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	printf("%d", a[k-1]);
	return 0;
}
