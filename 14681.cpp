
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int x = 0;
	int y = 0;
	scanf("%d", &x); scanf("%d", &y);
	if (x > 0 && y > 0) {
		printf("1");
	}
	if (x > 0 && y < 0) {
		printf("4");
	}
	if (x < 0 && y < 0) {
		printf("3");
	}
	if (x < 0 && y>0) {
		printf("2");
	}
	return 0;
}
