//BaekJoon Problem: https://www.acmicpc.net/problem/2740

#include <stdio.h>

int main(void){
       int i,j,k=0;
       int A1,A2 =0;
       scanf("%d %d",&A1,&A2);
       int A[A1][A2];
   
       for(int i=0;i<A1;i++)
          for(int j=0;j<A2;j++)
              scanf("%d",&A[i][j]);
  
      int B1,B2 = 0;
      scanf("%d %d",&B1,&B2);
      int B[B1][B2];
  
      for(i=0;i<B1;i++)
          for(j=0;j<B2;j++)
              scanf("%d",&B[i][j]);
  
      int C[A1][B2];
      for(i=0;i<A1;i++)
          for(j=0;j<B2;j++)
              C[i][j] = 0;
  
      for(i=0;i<A1;i++)
          for(j=0;j<B2;j++)
              for(int k=0;k<A2;k++)
              {
                  C[i][j]+=A[i][k] * B[k][j];
              }
  
  
      for(i=0;i<A1;i++){
          for(j=0;j<B2;j++)
              printf("%d ",C[i][j]);
          printf("\n");
      }
  
      return 0;
}
