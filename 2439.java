import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		
		for(int i=num-1;i>=0;i--) {
			for(int l=1;l<=i;l++) {
				System.out.print(" ");
			}
			for(int k=num-i;k>=1;k--) {
				System.out.print("*");
			}
			System.out.print("\n");
		}
				
		sc.close();
	}
}
