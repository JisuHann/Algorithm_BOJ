import java.util.*;
import java.io.*;

public class Main {
   public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);int n = sc.nextInt();
	   int[] A = new int[100001];
	   A[1]=1;A[2]=2;A[3]=3;
	   
	   for(int i=4;i<=n;i++) {
		   A[i]=i;
		   for(int k=1;i>=k*k;k++) {
			   if(A[i]>A[i-k*k]+1) {
				   A[i] = A[i-k*k]+1;
			   }
		   }
	   }
	   
	   System.out.println(A[n]);
   }
   
   
}
