#include <stdio.h>
#include <string>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#pragma warning(disable:4996)                                                                      
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int queue[2000001];
int front = 0;
int rear = -1;

int size_() {
	return  rear - front + 1;
}
void front_() {
	if (size_() == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[front]);
	}
}
void back_() {

	if (size_() == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[rear]);
	}

}
void pop_() {
	if (size_() == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[front++]);
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char cmd[6];
		cin >> cmd;
		if (!strcmp(cmd, "push")) {
			int x;
			cin >> x;
			queue[++rear] = x;
		}
		else if (!strcmp(cmd, "size")) {
			printf("%d\n", size_());
		}
		else if (!strcmp(cmd, "pop")) {
			pop_();
		}
		else if (!strcmp(cmd, "empty")) {
			if (size_() == 0) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if (!strcmp(cmd, "back")) {
			back_();
		}
		else if (!strcmp(cmd, "front")) {
			front_();
		}
	}
	return 0;
}
