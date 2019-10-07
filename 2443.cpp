#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    for(int i = num;i>0;i--){
        for (int j = num-i;j>=1;j--){
            printf(" ");
        }
        for(int k = 0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
}
