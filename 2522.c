//BaekJoon Problem: https://www.acmicpc.net/problem/2522
//별찍기 - 12

#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        for(int j=(num-i);j>=1;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
       
    for(int i=num-1;i>=1;i--){
        for(int j=(num-i);j>=1;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}
