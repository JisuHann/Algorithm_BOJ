import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   int num = Integer.parseInt(br.readLine());
	   
	   String[] s = br.readLine().split(" ");
	   int[] p = new int[1001];int[] res = new int[1001];
	   for(int l=1;l<=num;l++) {p[l]=Integer.parseInt(s[l-1].toString());}
	   
	   res[1] = p[1];

       for (int i = 2; i <= num; i++) {
    	   int e = res[i];
           for (int j = 1; j <= i; j++) {
        	   if(e<res[i-j]+p[j]) {
        		   e=res[i-j]+p[j];
        	   }
           }
           res[i]=e;
       }
	   System.out.println(res[num]);
   }
}
