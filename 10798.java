import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   String s1 = br.readLine();
	   String s2 = br.readLine();
	   String s3 = br.readLine();
	   String s4 = br.readLine();
	   String s5 = br.readLine();
	   
	   String res = "";
	   for(int i=0;i<15;i++) {
		   res += (get(s1,i)+get(s2,i)+get(s3,i)+get(s4,i)+get(s5,i));
	   }
	   System.out.println(res);
   }
   
   public static String get(String s, int num) {
	   if(s.length()>num) {
		   return Character.toString(s.charAt(num));
	   }else {
		   return "";

	   }
   } 
}
