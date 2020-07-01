
import java.util.Scanner;

public class URLify {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string ");
		String str = sc.nextLine();
		sc.close();
		int trueLength = getTrueLength(str);
		str = replaceSpaces(str, trueLength);
		System.out.println(str);
		
	}
	
	static String replaceSpaces(String str, int trueLength) {
		
		int spaceCount = 0, index = 0;
		char[] char_arr = str.toCharArray();
		
		for(int i=0; i<trueLength; i++) {
			if(char_arr[i] == ' ')
				spaceCount++;			
		}
		int newSize = trueLength + (spaceCount*2);
		char[] s = new char [newSize];
		
		for(int i=0; i<trueLength; i++) {
			if(char_arr[i] == ' ') {
				s[index]='%';
				s[index+1]='2';
				s[index+2]='0';
				index=index+3;
			}
			else {
				s[index] = char_arr[i];
				index++;
			}
			
		}

		str= new String(s);
		return str;
	}
	
	static int getTrueLength(String str) {
		char[] s = str.toCharArray();
		int index = 0;
		for(int i=str.length()-1; i>=0; i--) {
			if(s[i] == ' ')
				continue;
			else {
				index = i;
				break;
			}	
		}
		
		return index+1;
	}
}
