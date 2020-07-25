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
bool check(const string &s1, const string &s2) {
	if (s1.size() == s2.size()) {
		return s1 < s2;
	}
	return s1.size() < s2.size();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<string> pu;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		pu.push_back(a);
	}
	sort(pu.begin(), pu.end(), check);
	vector<string>::iterator iter;
	vector<string>::iterator uni;
	uni = unique(pu.begin(), pu.end());
	for (iter = pu.begin(); iter != uni; iter++) {
		printf("%s\n", (*iter).c_str());
	}
	return 0;
}
