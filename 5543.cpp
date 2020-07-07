#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int sum=0;
	int min = 100000000;
	int burget[3];
	int coke=0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &burget[i]);
	}
	for (int k = 0; k < 2; k++) {
		scanf("%d", &coke);
		for (int l = 0; l < 3; l++) {
			if (burget[l] + coke < min) {
				min = burget[l] + coke;
			}
		}
	}


	printf("%d\n", min-50);
	return 0;
}
