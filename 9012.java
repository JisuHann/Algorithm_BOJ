import java.util.*;

public class Main {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		for(int i=0;i<num;i++) {
			Stack <String> stack = new Stack<>();
			String s = sc.next();
			boolean error = false;
			for(int l=0;l<s.length() && error == false;l++) {
				
				if(s.charAt(l)== '(') {
					stack.add("(");
				}else {
					if(stack.empty()) {
						error = true;
					}else {
						stack.pop();
					}
				}
			}
			
			if(!stack.empty()) {
				error = true;
			}
			
			if(error==true) {
				System.out.println("NO");
			}else {
				System.out.println("YES");
			}
		}
		
		
		sc.close();
	}
}

