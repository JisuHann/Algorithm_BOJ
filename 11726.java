//Dynamic Programming
import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   int num = Integer.parseInt(br.readLine());
	   
	   int[] res = new int[num+1];
	   res[1]=1;res[2]=2;
	   for(int l=3;l<res.length;l++) {res[l] = (res[l-1] + res[l-2])%10007;}
	   System.out.println(res[num]);
   }
}

