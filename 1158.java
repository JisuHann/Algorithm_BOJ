import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
      Queue<Integer> que = new LinkedList<Integer>();
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      String[] input = br.readLine().split(" ");
      int N = Integer.parseInt(input[0]); int K = Integer.parseInt(input[1]);
      
      for(int i=1; i<=N; i++) {que.offer(i);}
      
      System.out.print("<");
      while(!(que.size()==1)) {
    	  for(int l=0;l<K-1;l++) {
    		  int poll = que.peek();que.poll();que.offer(poll);
    	  }
    	  int out = que.peek();que.poll();System.out.print(out+", ");
      }
      System.out.print(que.peek()+">");
      
   }
}
