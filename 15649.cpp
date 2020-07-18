#include <stdio.h>
#include <string>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#define MAX 9
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int N, M;
bool visit[MAX];
vector<int> V;
void DFS(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < V.size(); i++) {
			cout << V[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (visit[i] == true)continue;
		visit[i] = true;
		V.push_back(i);
		DFS(cnt + 1);
		visit[i] = false;
		V.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	DFS(0);
	return 0;
}
