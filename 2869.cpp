#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main(void) {
	int a, b, v = 0;
	scanf("%d %d %d", &a, &b, &v);
	int day = (v-b-1) / (a - b)+1;
	printf("%d", day);
	
	return 0;
}
