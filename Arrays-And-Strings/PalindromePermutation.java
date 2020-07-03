import java.util.Scanner;

public class PalindromePermutation {
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sc.nextLine();
		sc.close();
		
		boolean result = isPermutationOfPalindrome(str);
		System.out.println(result);
	}

	
	static boolean isPermutationOfPalindrome(String str) {
		
		str = str.toLowerCase();
		int[] arr = new int[128];
		
		for(int i=0; i<str.length(); i++){
			
			if(str.charAt(i) != ' ') {
				int val = str.charAt(i);
				arr[val]++;
			}
		}
			
		int count = 0;
		for(int i=0; i<128; i++) {
			if(arr[i]%2 != 0)
				count++;
		}
		
		if(count>1)
			return false;
		else
			return true;
	}
}
