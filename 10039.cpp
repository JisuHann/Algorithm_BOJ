#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int sum=0;
	int a=0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		if (a < 40) {
			a = 40;
		}
		sum += a;
	}

	printf("%d\n", sum/5);
	return 0;
}
