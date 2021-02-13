import java.util.*;
import java.io.*;

public class Main {
	static int[][] connect=new int[1001][1001];
	static int[] visited_bfs = new int[1001];
	static int n,m;static int num=0;
	public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   n = sc.nextInt(); m = sc.nextInt();
	   
	   for(int i =0;i<m;i++) {
		   int s = sc.nextInt(); int e = sc.nextInt();
		   connect[s][e] = 1; connect[e][s]=1;
	   }
	   while(true) {
		   int zero=0;int start = 0;
		   for(int i=n;i>=1;i--) {
			   if(visited_bfs[i]==0) {
				   zero++;start=i;
			   }
		   }
		   if(zero != 0) {
			   num++;bfs(start,num);
		   }else {
			   break;
		   }
	   }
	   System.out.println(num);
	}
   
   static void bfs(int i, int num) {
	   Queue<Integer> q = new LinkedList<>();
	   q.add(i);visited_bfs[i]=num;
	   while(!q.isEmpty()) {
		   int l = q.poll();
		   for(int k=1;k<=n;k++) {
			   if(connect[l][k]==1 && visited_bfs[k]==0) {
				   visited_bfs[k]=num;q.add(k);
			   }
		   }
	   }
   }
}
