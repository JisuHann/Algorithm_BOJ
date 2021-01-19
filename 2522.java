import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		
		for(int i=1;i<=num;i++) {
			for(int l=1;l<=num-i;l++) {
				System.out.print(" ");
			}
			for(int k=i;k>=1;k--) {
				System.out.print("*");
			}
			System.out.print("\n");
		}
		for(int i=num-1;i>=1;i--) {
			for(int l=1;l<=num-i;l++) {
				System.out.print(" ");
			}
			for(int k=i;k>=1;k--) {
				System.out.print("*");
			}
			System.out.print("\n");
		}
				
		sc.close();
	}
}
