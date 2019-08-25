#include <stdio.h>
#define swip(type, x, y) do{type t = x; x = y; y = t;}while(0)
void selection(int a[], int n){
  int i,j;
  for(i = 0;i<n-1;i++){
    int min = i;
    for(j = i+1;j <n;j++){
      if(a[j] < a[min]){
        min = j;
      }
    }
    swip(int, a[i], a[min]);
  }
}
