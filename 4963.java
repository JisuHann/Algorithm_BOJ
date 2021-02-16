import java.util.*;
import java.io.*;

public class Main {
	static int[][] visited_dfs = new int[51][51];
	static int[][] home = new int[51][51];
	static int[] xx = {-1,1,0,0,-1,-1,1,1};static int[] yy = {0,0,-1,1,1,-1,1,-1};
	static int w,h;static int p;
	public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   while(true) {
		   w = sc.nextInt();h = sc.nextInt();
		   if(w==0 && h==0) {break;}
		   visited_dfs = new int[51][51];
		   home = new int[51][51];
		   for(int i=1;i<=h;i++) {
			   for(int j=1;j<=w;j++) {home[i][j]=sc.nextInt();}
		   }
		   int countidx = 0;
		   for(int i=1;i<=h;i++) {
			   for(int j=1;j<=w;j++) {
				   if(home[i][j]==1 && visited_dfs[i][j]==0) {
					   dfs(i,j);countidx++;
				   }
			   }
		   }System.out.println(countidx);
	   }
	}
   
   static void dfs(int x, int y) {
	   visited_dfs[x][y]=1;
	   for(int i=0;i<8;i++) {
		   int curx = x + xx[i];
		   int cury = y + yy[i];
		   if(curx >= 1 && curx <=h) {
			   if(cury >=1 && cury <= w ) {
				   if(home[curx][cury]==1 && visited_dfs[curx][cury]==0) {
					   dfs(curx, cury);
				   }
			   }
		   }
	   }
   }
   
}
