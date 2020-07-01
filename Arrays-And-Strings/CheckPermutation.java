import java.util.*;
public class CheckPermutation {
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		 System.out.println("Enter 2 strings ");
		 String s1 = sc.nextLine();
		 String s2 = sc.nextLine();
		 sc.close();
		 
		 boolean isPermutation = isStringPermutation(s1, s2);
		 
		 if(isPermutation)
			 System.out.println("Strings are permutation of each other");
		 else
			 System.out.println("Strings are not a permutation of each other"); 
		 
	}
	
	static boolean isStringPermutation(String s1, String s2) {
		
		if(s1.length()!= s2.length())
			return false;
		
		s1=getSortedString(s1);
		s2= getSortedString(s2);

		System.out.println(s1+" "+s2);
		if(s1.equals(s2))
			return true;
		else
			return false;
	}
	
	static String getSortedString(String str) {
		char[] c = str.toCharArray();
		Arrays.sort(c);
		
		return new String(c);
	}

	
	static boolean isStringPermutaion_Optimized(String s1, String s2) {
		
		if(s1.length()!= s2.length())
			return false;
		
		char[] letters = new char[128];
		
		for(char c : s1.toCharArray()) {
			letters[c]++;
		}
		
		for(char c : s2.toCharArray()) {
			letters[c]--;
			
			if(letters[c]<0)
				return false;
		}	
		return true;
	}
}
