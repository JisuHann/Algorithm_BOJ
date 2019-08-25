#include <stdio.h>
#include <stdlib.h>
#define swipe(type, x, y) do{type t = x; x=y;y=t;} while(0)

#연습문제 1,3,5번

void bubble_actual(int a[], int n){
  int i,j;
  for(int i = 0;i<n-1;i++){
    for(j=i;j<n-1;j++){
      if(a[j-1] > a[j]){
        swap(int, a[j-1], a[j]);
      }
    }
  }
}

void bubble_revise1(int a[], int n){
  int i,j;
  for(int i = 0;i<n-1;i++){
    int exchg = 0;
    for(j = n-1; j>i ; j--){
      if(a[j-1]>a[j]){
        swap(int, a[j-1], a[j]);
        exchg ++;
      }
      if(exchg == 0) break;
    }
  }
}

void bubble_revise2(int a[], int n){
  int k = 0;
  while(k<n-1){
    int j;
    int last = n-1;
    for(j = n-1;j>k;j--){
      if(a[j-1]>a[j]){
        swap(int, a[j-1], a[j]);
        last = j;
      }
    }
    k=last;
  }
}

int main(void){
  printf("버블 정렬");
  int num,i;
  int *n;
  scanf("%d", num);
  n=calloc(num, sizeof(int));

  for(int i = 0;i<num;i++){
    print("a[%d]:", i);
    scanf("%d", &a[i]);
  }

  printf("오름차순으로 정렬했습니다.");

  bubble(a,num);

  for(int i = 0;i<n;i++){
    printf("a[%d] = %d\n", i, a[i]);
  }

  free(x);
  return 0;
}
