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
int n;
char tmp[100];
bool check(string str) {
	int a[26] = { 0, };
	for (int l = 1; l <= str.length(); l++) {
		if (a[tmp[l-1] - 'a'] != l-1 && a[tmp[l-1] - 'a'] != 0) {
			return false;
		}
		a[tmp[l-1] - 'a'] = l;
//		printf("%c %d %d\n", tmp[l-1], tmp[l-1] - 'a', a[tmp[l-1] - 'a']);
	}
//	printf("this is true\n");
	return true;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (check(tmp) == true) {
			sum++;
		}
		else {
//			printf("false\n");
		}
	}	
	printf("%d", sum);

	return 0;
}
