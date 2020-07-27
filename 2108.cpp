//새로운 접근: 숫자 하나하나 다 저장하기보다는 각 숫자의 개수들로 접근
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
	int a[8001] = { 0, };
	int n, tmp;
	int min = 4000, max = -4000;
	cin >> n;

	//산술평균, 범위
	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		a[tmp + 4000]++;
		sum += tmp;
		if (min > tmp) {
			min = tmp;
		}
		if (max < tmp) {
			max = tmp;
		}
	}
	double avg = sum / n; //평균은 음양에 따라 int형이 달라지므로 꼭 확인!!
	if (avg > 0)avg += 0.5;
	else avg -= 0.5;

	//중앙값: 중앙 index인 (n+1)/2인 값만 추출
	int many = 0, m_idx = 0;
	int idx = 0;
	for (int i = 0; i < 8001; i++) {
		many += a[i];
		if (many >= (n + 1) / 2) {
			m_idx = i;
			break;
		}
	}

	//최빈값
	int freq = 0;
	for (int i = 1; i < 8001; i++)if (a[i] > a[freq])freq = i;
	for (int i = freq + 1; i < 8001; i++) {
		if (a[i] == a[freq]) {
			freq = i;
			break;
		}
	}


	printf("%d\n", (int)avg);
	printf("%d\n", m_idx-4000);
	printf("%d\n", freq-4000);
	printf("%d\n", max - min);


	return 0;
}
