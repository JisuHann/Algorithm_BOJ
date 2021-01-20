import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		boolean t = false;
		for(int i=1;i<=num;i++) {
			int sum=i;
			int l=i;
			while(l>=1) {
				sum += l%10;
				l = l/10;
			}
			if(sum==num) {
				System.out.println(i);
				t = true;
				break;
			}
		}
		if(t==false) {
			System.out.println("0");
		}
		
		sc.close();
	}
}
