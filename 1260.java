import java.util.*;
import java.io.*;

public class Main {
	static int[][] connect=new int[1001][1001];
	static int[] visited_dfs = new int[1001];
	static int[] visited_bfs = new int[1001];
	static int n,m,v;
	public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   n = sc.nextInt(); m = sc.nextInt(); v = sc.nextInt();
	   
	   for(int i =0;i<m;i++) {
		   int s = sc.nextInt(); int e = sc.nextInt();
		   connect[s][e] = 1; connect[e][s]=1;
	   }
	   dfs(v);System.out.println();
	   bfs(v);
	   
	}
   
   static void dfs(int i) {
	   visited_dfs[i]=1; System.out.print(i+" ");
	   for(int k=1;k<=n;k++) {
		   if(connect[i][k]==1 && visited_dfs[k]==0) {
			   dfs(k);
		   }
	   }
   }
   
   static void bfs(int i) {
	   Queue<Integer> q = new LinkedList<>();
	   q.add(i);visited_bfs[i]=1;System.out.print(i+" ");
	   while(!q.isEmpty()) {
		   int l = q.poll();
		   for(int k=1;k<=n;k++) {
			   if(connect[l][k]==1 && visited_bfs[k]==0) {
				   visited_bfs[k]=1;q.add(k);System.out.print(k+" ");
			   }
		   }
	   }
   }
}
