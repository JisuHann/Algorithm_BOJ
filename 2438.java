import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		
		for(int i=1;i<=num;i++) {
			for(int l=1;l<=i;l++) {
				System.out.print("*");
			}
			System.out.print("\n");
		}
				
		sc.close();
	}
}
