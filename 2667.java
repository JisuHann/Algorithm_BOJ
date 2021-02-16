import java.util.*;
import java.io.*;

public class Main {
	static int[][] visited_dfs = new int[26][26];
	static int[][] home = new int[26][26];
	static int[] xx = {-1,1,0,0};static int[] yy = {0,0,-1,1};
	static int a;static int p;
	static int[] countt = new int[26*26+1];
	public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   a = sc.nextInt();String s;
	   for(int i=1;i<=a;i++) {
		   s = sc.next();
		   for(int j=1;j<=a;j++) {if(s.charAt(j-1)=='1') {home[i][j]=1;}}
	   }
	   
	   int countidx = 0;
	   for(int i=1;i<=a;i++) {
		   for(int j=1;j<=a;j++) {
			   if(home[i][j]==1 && visited_dfs[i][j]==0) {
				   countidx++;dfs(i,j,countidx);
			   }
		   }
	   }
	   Arrays.sort(countt,1,countidx+1);
	   System.out.println(countidx);
	   for(int i=1;i<=countidx;i++) {
		   System.out.println(countt[i]);
	   }
	   
	}
   
   static void dfs(int x, int y, int countidx) {
	   visited_dfs[x][y]=countidx;countt[countidx]= countt[countidx]+1;
	   for(int i=0;i<4;i++) {
		   int curx = x + xx[i];
		   int cury = y + yy[i];
		   if(curx >= 1 && curx <= a) {
			   if(cury >=1 && cury <= a ) {
				   if(home[curx][cury]==1 && visited_dfs[curx][cury]==0) {
					   dfs(curx, cury, countidx);
				   }
			   }
		   }
	   }
   }
   
}
