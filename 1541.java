import java.util.*;
import java.io.*;
import javax.script.ScriptEngineManager;
import javax.script.ScriptEngine;

public class Main {

   public static void main(String[] args) throws IOException {
	   BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	   String[] s = br.readLine().split("\\-");
	   
	   int ress=summ(s[0]);
	   for(int i =1;i<s.length;i++) {
		   ress -= summ(s[i]);
	   }
	   System.out.println(ress);
   }
   
   public static int summ(String s) {
	   int res=0;
	   String[] add = s.split("\\+");
	   for(int l=0;l<add.length;l++) {
		   res += Integer.parseInt(add[l]);
	   }
	   return res;
   }
}

