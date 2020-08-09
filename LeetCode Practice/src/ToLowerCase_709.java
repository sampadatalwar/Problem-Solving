
public class ToLowerCase_709 {
	
	public static void main(String[] args) {
		String str = "AbC";
		str = str.toLowerCase();
		String str2 = converToLowerCase(str);
		System.out.println(str+" "+str2);
	}
	
	static String converToLowerCase(String str) {
		
		String s = "";
        
        for(int i=0; i<str.length(); i++){
            
            int j = str.charAt(i);
            
            
            if (j >= 65 && j<=90){
                char c = (char)(j+32);
                s= s+String.valueOf(c);
            }
            else{
                s = s+str.charAt(i);
            }
                
            
        }
        
        return s;
	}

}
