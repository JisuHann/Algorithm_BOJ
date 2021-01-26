import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   int num = Integer.parseInt(br.readLine());
	   
	   int[] res = new int[num+1];
	   res[1]=0;
	   for(int l=2;l<res.length;l++) {res = make_one(l, res);}
	   System.out.println(res[num]);
   }
   
   public static int[] make_one(int l, int[] res) {
	   res[l]= res[l-1]+1;
	   if(l%3==0) {
		   if(res[l]>1+ res[l/3]) {res[l] = 1+ res[l/3];}
	   }
	   if(l%2 ==0) {
		   if(res[l]>1+ res[l/2]) {res[l] = 1+ res[l/2];}
	   }
	   return res;
   } 
}

