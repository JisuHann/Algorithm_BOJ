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
typedef struct point {
	int age;
	string name;
	int num;
};
bool check(const point &s1, const point &s2) {
	if (s1.age == s2.age) {
		return s1.num < s2.num;
	}
	return s1.age < s2.age;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<point> pu;
	int age[201] = { 0, };
	int n;
	cin >> n;
	int sum=0;
	for (int i = 0; i < n; i++) {
		point a;
		cin >> a.age >> a.name;
		if (age[a.age] != 0) {
			a.num = age[a.age] + 1;
			age[a.age]++;
		}
		else {
			a.num = 1;
			age[a.age]++;
		}
		pu.push_back(a);
	}
	sort(pu.begin(), pu.end(), check);
	vector<point>::iterator iter;
	for (iter = pu.begin(); iter != pu.end(); iter++) {
		cout << (*iter).age<<" "<< (*iter).name<<"\n";
	}
	return 0;
}
