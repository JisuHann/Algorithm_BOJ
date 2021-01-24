import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException{
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      String a = br.readLine();
      StringBuilder format = new StringBuilder();
      
      for(int i=0;i<a.length()-2;i++) {
    	  if((a.charAt(i)== '(') && (a.charAt(i+1)== ')')) {
    		  format.append('1');
    		  i++;
    	  }else {
    		  format.append(a.charAt(i));
    	  }
      }
      format.append(')');
      
      int add=0;int sum=0;
      for(int i=0;i<format.length()-1;i++) {
    	  if(format.charAt(i)=='(') {
    		  add++;sum++;
    	  }else if(format.charAt(i)==')'){
    		  add--;
    	  }else if(format.charAt(i)=='1') {
    		  sum += add;
    	  }
      }
      System.out.println(sum);
      
   }
}
