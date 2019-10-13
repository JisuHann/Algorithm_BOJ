//BaekJoon Problem: https://www.acmicpc.net/problem/14490
//유클리드 호제법을 이용한 풀이

#include <stdio.h>

int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}


int main(void){
    int num1, num2;
    scanf("%d:%d", &num1, &num2);
    int common = gcd(num1, num2);
    printf("%d:%d", num1/common, num2/common);
    return 0;
}

