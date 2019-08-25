#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n){
  int i,j;
  for(i = 1;i<n;i++){
    int tmp = a[i];
    for(j = i;j>0 && a[j-1] > tmp;j--)
      a[j] = a[j-1];
    a[j] = tmp;
  }
}
