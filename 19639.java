import java.util.*;
import java.io.*;

public class Main {
	static int[] A = new int[51];
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		for(int i=0;i<num;i++) { A[i] = sc.nextInt();}
		
		int count=0;
		while(true) {
			boolean zero = true;
			for(int i=0;i<num;i++) {if(A[i]>0) {zero=false;}}
			if(zero==true) {break;}
			
			for(int i=0;i<num;i++) {if(A[i]%2==1) {A[i]--;count++;}}
			
			zero = true;
			for(int i=0;i<num;i++) {if(A[i]>0) {zero=false;}}
			if(zero==true) {break;}
			
			for(int i=0;i<num;i++) {A[i]/=2;}count++;
		}
		System.out.println(count);
	}
	
}
