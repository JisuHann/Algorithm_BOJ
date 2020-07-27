#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <deque>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a[20001] = { 0, };
	int n, tmp;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		cin >> tmp;
		a[tmp+10000]++;
		int many = 0; //many:현재 search 중인 위치, m_idx: 중앙값 index 
		int m_idx =0;
		if (k % 2 ==1) {
			m_idx = (k+ 1) / 2;
		}
		else {
			m_idx = k / 2;
		}
		for (int i = 0; i < 20001; i++) {
			many += a[i];
			if (many >= m_idx) {
				printf("%d\n", i-10000);
				break;
			}
		}
	}	

	return 0;
}
