#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int a[1001];
	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + num);
	int sum = 0;
	for (int i = 0; i < num; i++) {
		for (int l = 0; l <= i; l++) {
			sum += a[l];
		}
	}
	printf("%d", sum);
	
	return 0;
}
