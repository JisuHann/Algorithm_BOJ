import java.util.*;
import java.io.*;


public class Main {
	static class absolute implements Comparable<absolute>{
		int real;
		int fake;
		
		public absolute(int temp, int abs) {
			super();
			this.real = temp;
			this.fake = abs;
		}

		@Override
		public int compareTo(absolute s) {
			if(this.fake < s.fake) {
				return 1;
			}else if(this.fake == s.fake) {
				if(this.real < s.real) {
					return 1;
				}else if(this.real == s.real) {
					return 0;
				}
			}
			return -1;
		}
		
	}
	public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   int num = sc.nextInt();
	   PriorityQueue<absolute> pq = new PriorityQueue<>(Collections.reverseOrder());
	   for(int i=0;i<num;i++) {
		   int temp = sc.nextInt();
		   if(temp == 0) {
			   if(pq.isEmpty()) {
				   System.out.println(0);
			   }else {
				   absolute abb = pq.poll();
				   System.out.println(abb.real);
			   }
		   }else {
			   absolute abs = new absolute(temp, Math.abs(temp));
			   pq.add(abs);
		   }
	   }
	}
   
}
