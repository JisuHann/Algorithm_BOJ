import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   String s = br.readLine();
	   ArrayList<String> dic = new ArrayList<String>();
	   for(int i=0;i<s.length();i++) {
		   dic.add(s.substring(i));
	   }
	   Collections.sort(dic);
	   for(String str: dic) {
		   System.out.println(str);
	   }
   } 
}
