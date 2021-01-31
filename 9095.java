import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   int num = Integer.parseInt(br.readLine());
	   
	   int[] res = new int[12];
	   res[1]=1;res[2] = 2;res[3]=4;res[4]=7;
	   for(int i=5;i<12;i++) {
		   res[i] = res[i-1]+res[i-2]+res[i-3];
	   }
	   
	   for(int l=0;l<num;l++) {
		   System.out.println(res[Integer.parseInt(br.readLine())]);
	   }
   }
}


