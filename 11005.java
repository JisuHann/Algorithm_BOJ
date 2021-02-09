import java.util.*;
import java.io.*;

public class Main {
   public static void main(String[] args) throws IOException {
	   Scanner sc = new Scanner(System.in);
	   long n = sc.nextLong();long b = sc.nextLong();
	   String s="";
	   while(n>0) {
		   long l = n%b;s+=tostring(l);
		   n /=b;
	   }
	   System.out.println(new StringBuilder(s).reverse().toString());
   }
   
   static char tostring(long l) {
	   if(l<10) {return (char)(l+'0');}
	   else {return (char)(l-10+'A'); }
   }
}
