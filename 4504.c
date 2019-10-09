//Baekjoon Problem: https://www.acmicpc.net/problem/4504

#include <stdio.h>

int main(void){
    int num;
    scanf("%d\n", &num);
    while(1){
        int n;
        scanf("%d\n",&n);
        if(n == 0)
            break;
        if(n%num == 0)
            printf("%d is a multiple of %d.\n",n,num);
        else
            printf("%d is NOT a multiple of %d.\n",n,num);
    }
}
