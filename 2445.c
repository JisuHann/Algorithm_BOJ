//BaekJoon Online Problem: https://www.acmicpc.net/problem/2445
//별 찍기 - 8

#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    for(int i = 1;i<=num;i++){
        for(int j=1;j<= i;j++){
            printf("*");
        }
        for(int k = 1;k<=(num-i)*2;k++){
            printf(" ");
        }
        for(int l = 1;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = num-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("*");
        }
        for(int k=(num-i)*2;k>=1;k--){
            printf(" ");
        }
        for(int l = i;l>=1;l--){
            printf("*");
        }
        printf("\n");
    }
}
