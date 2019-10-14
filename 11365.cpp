//BaekJoon Problem: https://www.acmicpc.net/problem/11365

#include<iostream>
#include<string>
using namespace std;

int main() {
	while (1) {
		string s;
		getline(cin, s);
		if (s == "END") {
			break;
		}
		for (int i = s.length()-1; i >=0; i--) {
			cout << s[i];
		}
		cout << endl;
	}

	return 0;
}
