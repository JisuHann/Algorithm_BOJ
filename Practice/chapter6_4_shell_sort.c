#include <stdio.h>
#include <stdlib.h>

void shell(int a[], int n){
  int i,j,h;
  for(h = n/2;h>0;h /= 2)
    for(i=h;i<n;i++){
      int tmp = a[i];
      for(j=i-h;j>=0 && a[j]>tmp;j-=h)
        a[j+h]=a[j];
      a[j+h] = tmp;
    }
}
