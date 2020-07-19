#include <stdio.h>
#include <string>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)                                                                      
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a,b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		printf("%d\n", 2 - a + b);
	}
	return 0;
}
