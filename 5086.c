//BaekJoon Problem: https://www.acmicpc.net/problem/5086
//배수와 약수

#include <stdio.h>

int main(void){
    int a,b;
    while(1){
        scanf("%d %d\n", &a, &b);
        if(a == 0 && b==0) break;
        if(a % b==0){
            printf("multiple\n");
        }else if(b %a ==0){
            printf("factor\n");
        }else{
            printf("neither\n");
        }
    }
}
