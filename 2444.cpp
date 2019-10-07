//BaekJoon Problem: https://www.acmicpc.net/problem/2444

#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    for(int i = 0;i<num;i++){
        for (int j = num -1-i;j>=1;j--){
            printf(" ");
        }
        for(int k = 0;k<(2*i+1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = num-1;i>0;i--){
        for (int j = num-i;j>=1;j--){
            printf(" ");
        }
        for(int k = 0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
}
