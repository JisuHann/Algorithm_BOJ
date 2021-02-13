import java.util.*;
import java.io.*;

public class Main {
	static int[][] connect=new int[1001][1001];
	static int[] visited_bfs = new int[1001];
	static int test_case,n;
	public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   test_case = sc.nextInt(); 
	   for(int k=1;k<=test_case;k++) {
		   n = sc.nextInt();int count=0;
		   connect=new int[n+1][n+1];
		   visited_bfs = new int[n+1];
		   for(int i =1;i<=n;i++) {
			   int s = sc.nextInt();
			   connect[s][i] = 1; connect[i][s]=1;
		   }
		   
		   while(true) {
			   int zero=0;int start = 0;
			   for(int i=n;i>=1;i--) { if(visited_bfs[i]==0) {zero++;start=i;}}
			   if(zero != 0) {count++;bfs(start, count);
			   }else {break;}
		   }
		   System.out.println(count);
	   }
	}
   
   static void bfs(int i, int count) {
	   Queue<Integer> q = new LinkedList<>();
	   q.add(i);visited_bfs[i]=count;
	   while(!q.isEmpty()) {
		   int l = q.poll();
		   for(int k=1;k<=n;k++) {
			   if(connect[l][k]==1 && visited_bfs[k]==0) {
				   visited_bfs[k]= count;q.add(k);
			   }
		   }
	   }
   }
}
