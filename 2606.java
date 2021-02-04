import java.util.*;
import java.io.*;

public class Main {
	static int[] visited = new int[101];
	static int[][] fac = new int[101][101];

   public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   int n = sc.nextInt();int num = sc.nextInt();
	   
	   for(int i=0;i<num;i++) {
		   int from = sc.nextInt();
		   int to = sc.nextInt();
		   fac[from][to]=1;
		   fac[to][from]=1;
	   }
	   
	   check_go(fac, 1, visited, n);
	   int sum=0;
	   for(int i=2;i<=n;i++) {
		   if(visited[i]==1) {sum++;}
	   }
	   System.out.println(sum);
   }
   
   public static void check_go(int[][] fac, int root, int[] visited,int n) {
	   visited[root]=1;
	   for(int l=1;l<=n;l++) {
		   if(fac[root][l]==1) {
			   if(visited[l]==0) {
				   check_go(fac, l, visited, n);
			   }
		   }
	   }
	   
	   return;
   }
}
