#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int A, B, cnt;

int main()
{
	cin >> A >> B;
	while (true)
	{
    //성립될 때까지 while문 돌리기
		if (A > B){
			cout << -1;
			break;
		}
		if (A == B){
			cnt++;
			cout << cnt;
			break;
		}

		if (B % 10 == 1){ //어차피 2로 나뉘지 않으므로 처리 가능함.
			B /= 10;
		}else if (B % 2 == 0){
			B /= 2;
		}else{
			cout << -1;
			break;
		}
		cnt++;
	}
}
