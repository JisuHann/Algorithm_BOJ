//BaekJoon Problem: https://www.acmicpc.net/problem/4673

#include <stdio.h>

void check(){
    int i, a[10001] = {0};
    int re = 0;
    for (i = 1; i <= 10000; i++){
        if(i < 10){
            re = i+i;
            a[re] = 1;
        }
        else if(i < 100){
            re = i + (i/10) + (i%10);
            a[re] = 1;
        }
        else if(i < 1000){
            re = i + (i/100) + ((i%100)/10) + ((i%100)%10);
            a[re] = 1;
        }
        else if(i < 10000){
            re = i + (i/1000) + ((i%1000)/100) + (((i%1000)%100)/10) + (((i%1000)%100)%10);
            if (re <= 10000)    a[re] = 1;
        }
    }
    
    for(i = 1; i <= 10000; i++){
        if(a[i] != 1)
            printf("%d\n", i);
    }
}

int main(void) {
    check();
    return 0;
}
