import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
      Queue<Integer> que = new LinkedList<Integer>();
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      int num = Integer.parseInt(br.readLine());
      int back=-1;
      
      for(int i=0; i<num; i++) {
    	  String[] input = br.readLine().split(" ");
    	  if(input[0].contains("push")) {
    		  back=Integer.parseInt(input[1]);
    		  que.offer(back);
    	  }else if(input[0].equals("pop")){
    		 System.out.println(que.isEmpty()?-1:que.poll());
    	  }else if(input[0].equals("size")) {
    		  System.out.println(que.size());
    	  }else if(input[0].equals("empty")) {
    		 System.out.println(que.isEmpty()?1:0);
    	  }else if(input[0].equals("front")) {
    		System.out.println(que.isEmpty()?-1:que.peek());
    	  }else if(input[0].equals("back")) {
    		System.out.println(que.isEmpty()?-1:back);
    	  }
      }
      
   }
}
