import java.util.*;
import java.io.*;

public class Main {
	static int[] visited_dfs = new int[1000000];static int a;
	static int p;
	public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   a = sc.nextInt(); p = sc.nextInt();
	   int[] d = new int[1000000];int count=0;
	   d[1]=a;
	   dfs(d[1]);
	   for(int i=2;i<1000000;i++) {
		   if(visited_dfs[i]==1) {count++;}
	   }
	   System.out.println(count);
	}
   
   static void dfs(int now) {
	   visited_dfs[now]++;
	   if(visited_dfs[now] > 2) {return;}
	   int sum=0;
	   while(now>0) {
		   sum += Math.pow((now%10),p);
		   now = now/10;
	   }
	   dfs(sum);
   }
   
}
