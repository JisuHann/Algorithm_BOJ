#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
typedef struct node {
	char left;
	char right;
}node;
struct node nodes[26];
void preorder(char root);
void inorder(char root);
void postorder(char root);


int main(void) {
	cin.tie(NULL);
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < num; i++) {
		char a, b, c = NULL;
		cin >> a >> b >> c;
		nodes[a].left = b;
		nodes[a].right = c;
	}

	preorder('A'); printf("\n");
	inorder('A'); printf("\n");
	postorder('A'); printf("\n");
	return 0;
}

void preorder(char root) {
	if (root == '.') return;
	else {
		cout << (char) root;
		preorder(nodes[root].left);
		preorder(nodes[root].right);
	}
}

void inorder(char root) {
	if (root == '.') return;
	else {
		inorder(nodes[root].left);
		cout << (char) root;
		inorder(nodes[root].right);
	}
}

void postorder(char root) {
	if (root == '.')return;
	else {
		postorder(nodes[root].left);
		postorder(nodes[root].right);
		cout << (char) root;
	}
}
