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
typedef struct a {
	int tall;
	int weight;
}a;

int main() {
	int N;
	a all[50];
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d %d", &all[i].tall, &all[i].weight);
	}

	for (int j = 1; j <= N; j++) {
		int sum = 0;
		for (int k = 1; k <= N; k++) {
			if (all[k].tall > all[j].tall && all[k].weight > all[j].weight) {
				sum++;
			}
		}
		cout << sum+1 << " ";
	}


	return 0;
}
