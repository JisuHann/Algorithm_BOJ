//BaekJoon Problem: https://www.acmicpc.net/problem/2609

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
    scanf("%d %d", &num1, &num2);
    int a=gcd(num1, num2);
    printf("%d\n",a);
    int b = num1*num2/a;
    printf("%d", b);
    return 0;
}
