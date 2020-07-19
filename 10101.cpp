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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin >> a >> b>>c;
	if (a == 60 && b == 60 && c == 60) {
		printf("Equilateral");
	}
	else if(a+b+c != 180){
		printf("Error");
	}
	else {
		if (a == b || b == c || c == a) {
			printf("Isosceles");
		}
		else {
			printf("Scalene");
		}
	}
	

	return 0;
}
