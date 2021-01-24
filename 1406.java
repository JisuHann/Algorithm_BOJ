import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
      StringBuilder s = new StringBuilder(br.readLine());
      StringBuilder res = new StringBuilder();
      int num = Integer.parseInt(br.readLine());
      int cur = s.length();
      
      Stack<Character> left = new Stack<>();
      Stack<Character> right = new Stack<>();
      
      for(int i=0;i<s.length();i++) {left.push(s.charAt(i));}
      for(int i=0; i<num; i++) {
    	  String[] input = br.readLine().split(" ");
    	  if(input[0].equals("L")) {
    		  if(!left.isEmpty()) {right.push(left.pop());}
    	  }else if(input[0].equals("D")){
    		  if(!right.isEmpty()) {left.push(right.pop());}
    	  }else if(input[0].equals("B")) {
    		  if(!left.isEmpty()) {left.pop();}
    	  }else if(input[0].contains("P")) {
    		  left.push(input[1].charAt(0));
    	  }
      }
      
      while(!left.isEmpty()) {right.push(left.pop());}
      while(!right.isEmpty()) {res.append(right.pop());}
      bw.write(res.toString());
      bw.flush();bw.close();
   
   } 
}
