#include <stdio.h>
#include <string.h>
#include <algorithm>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
struct point {
	int x;
	int y;
};

bool cmp(const point& p1, const point& p2) {
	if (p1.x < p2.x) {
		return true;
	}
	else if (p1.x == p2.x) {
		return p1.y < p2.y;
	}
	else {
		return false;
	}
}
int main(void) {
	int num = 100001;
	scanf("%d", &num);
	point p[100001];
	int a, b;
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &a, &b);
		p[i].x = a;
		p[i].y = b;
	}

	sort(p, p + num, cmp);
	for (int j = 0; j < num; j++) {
		printf("%d %d\n", p[j].x, p[j].y);
	}
}
