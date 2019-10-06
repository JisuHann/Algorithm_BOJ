//BaekJoon Problem: https://www.acmicpc.net/problem/1026

#include<stdio.h>
int main(){
    int n, temp, sum = 0;
    int a[50];
    int b[50];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);

    for(int i=0; i<n-1; i++){ 
        for(int j=0; j<n-1-i; j++){
            if(a[k] < a[k+1]){
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
        for(int k=0; k<n-1-i; k++){ 
            if(b[k] > b[k+1]){
                temp = b[k];
                b[k] = b[k+1];
                b[k+1] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++)
        sum+=a[i]*b[i];
    
    printf("%d", sum);
}
