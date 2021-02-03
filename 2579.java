import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   long[] p = new long[301];
	   long[] res = new long[301];
	   int num = sc.nextInt();
	   for(int i=1;i<=num;i++) {
		   p[i]=sc.nextLong();
	   }
	   res[1]=p[1];
	   res[2]=p[1]+p[2];
	   res[3]=Math.max(p[1]+p[3], p[2]+p[3]);
	   for(int i=4;i<=num;i++) {
		   long max = Math.max(res[i-2], res[i-3]+p[i-1]);
		   res[i] = max + p[i];
	   }
	   
	   System.out.println(res[num]);
	   
   }
}
