#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


int main(void) {
	int num = 0;
	scanf("%d", &num);

	if (num < 100) {
		printf("%d", num);
	}
	else {	//세자리 수
		int result = 99;
		for (int i = 100; i <= num; i++) {
			int t = i / 100;
			int s = i%100/10;
			int f = i % 10;

			if ((t - s) == (s - f)) {
				result++;
			}
		}
		printf("%d", result);
	}

	return 0;
}
