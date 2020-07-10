#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a[1000001];
	int sta, fin = 0;
	scanf("%d %d", &sta, &fin);
	for (int i = 2; i <= fin; i++) {
		a[i] = i;
	}

	for (int j = 2; j <= fin; j++) {
		if (a[j] == 0) continue;
		for (int l = 2 * j; l <= fin; l += j) {
			a[l] = 0;
		}
	}

	for (int i = sta; i <= fin; i++) {
		if (a[i] != 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
