
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int l = 0; l < i; l++) {
			printf("*");
			fflush(stdout);
		}
		printf("\n");
	}
	for (int i = num-1; i >= 1; i--) {
		for (int l = 0; l < i; l++) {
			printf("*");
			fflush(stdout);
		}
		printf("\n");
	}
	return 0;
}
