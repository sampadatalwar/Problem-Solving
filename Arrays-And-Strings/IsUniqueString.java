import java.util.*;
public class IsUniqueString {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		sc.close();
		
		boolean result = isUniqueChars(str);
		
		if(result)
			System.out.println("YES");
		else
			System.out.println("NO");
		
	}

	static boolean isUniqueChars(String s) {
		
		if (s.length()>128)
			return false;
		
		boolean[] chars = new boolean[128];
		
		for (int i=0; i<s.length(); i++) {
			
			int val = s.charAt(i);
			
			if(chars[val])
				return false;
			
			chars[val] = true;
		}
		return true;
	}
}
