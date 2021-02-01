import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   int num = Integer.parseInt(br.readLine());
	   
	   long[] res = new long[10];
	   long[] last = new long[10];
	   for(int i=1;i<=9;i++) {res[i]=1;last[i]=1;}
	   
	   for(int k=2;k<=num;k++) {
		   for(int j=0;j<=9;j++) {
			   if(j==0) {
				   res[0] = last[1] % 1000000000;
			   }else if(j==9){
				   res[9] = last[8]% 1000000000;
			   }else {
				   res[j] = (last[j-1]+last[j+1])% 1000000000;
			   }
		   }
		   for(int j=0;j<=9;j++) {
			   last[j] = res[j];
		   }
	   }
	   long sum=0;
	   for(int kk=0;kk<=9;kk++) {
		   sum += (res[kk]%1000000000);
	   }
	   System.out.println(sum%1000000000);
   }
}
