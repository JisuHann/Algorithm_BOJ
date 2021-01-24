import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
      StringBuilder s = new StringBuilder(br.readLine());
      StringBuilder res = new StringBuilder();
      Map<Character, Integer>dict = new HashMap<>();
      
      for(int i=97;i<=122;i++) {
    	  dict.put((char)i, -1);
      }
      
      for(int i=0;i<s.length();i++) {
    	  Character l = s.charAt(i);
    	  if(dict.get(l)==-1) {
    		  dict.put(l, i);
    	  }
      }
      
      for(int i=97;i<=122;i++) {
    	  res.append(dict.get((char)i)+" ");
      }
      
      bw.write(res.toString());
      bw.flush();bw.close();
   
   } 
}
