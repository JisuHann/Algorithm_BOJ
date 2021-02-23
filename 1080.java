import java.util.*;
import java.io.*;

public class Main {
	static int[][] A = new int[51][51];
	static int[][] B = new int[51][51];
	static int a,b;
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt(); int b= sc.nextInt();
		for(int i=1;i<=a;i++){String s= sc.next();for(int j=1;j<=b;j++) {A[i][j]= (int)(s.charAt(j-1))-48;}}
		for(int i=1;i<=a;i++){String s= sc.next();for(int j=1;j<=b;j++) {B[i][j]= (int)(s.charAt(j-1))-48;}}

		int count=0;
		for(int i=1;i<=a-2;i++) {
			for(int j=1;j<=b-2;j++) {
				if(A[i][j]!=B[i][j]) {
					count++;change(i+1,j+1);
				}
			}
		}
		
		for(int i=1;i<=a;i++) {
			for(int j=1;j<=b;j++) {
				if(A[i][j]!=B[i][j]) {
					System.out.println(-1);
					return;
				}
			}
		}
		System.out.println(count);
	}
	
	public static void change(int x, int y) {
		for (int i=-1; i<=1; i++) {
	        for (int j=-1; j<=1; j++) {
	            A[x+i][y+j]=1-A[x+i][y+j];
	        }
	    }
	}

}
