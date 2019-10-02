#include<stdio.h>
int main(void){
    int num,k,temp;
    int s[1000];
    scanf("%d", &num);
    for(int i = 1;i<=num;i++){
        scanf("%d", &s[i-1]);
    }
    for(int i = 0 ; i < num ; i ++) {
        for(int j = 0 ; j < num -i -1 ; j ++) {
            if(s[j]>s[j+1]) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    for(int l =0;l<num;l++){
        printf("%d\n", s[l]);
    }
         
    return 0;
}
