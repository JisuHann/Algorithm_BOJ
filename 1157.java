import java.util.*;
import java.io.*;

public class Main {

   public static void main(String[] args) throws IOException {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
      StringBuilder s = new StringBuilder(br.readLine().toUpperCase());
      int[] list = new int[26];
      int max=0;char res='?';

      for (int i = 0; i < s.length(); i++) {
          list[s.charAt(i) - 65]+=1;
          if (max < list[s.charAt(i) - 65]) {
              max = list[s.charAt(i) - 65];
              res = s.charAt(i);
          } else if (max == list[s.charAt(i) - 65]) {
              res = '?';
          }
      }
      bw.write(res);
      bw.flush();bw.close();
   
   } 
}
