
public class ShuffleString_1528 {
	
	public static void main(String[] args) {
		
		int[] indices = {4,5,6,7,0,2,1,3};
		
		String s = restoreString("codeleet", indices);
		System.out.println("Shuffled string: " + s);
		
		
	}

	public static String restoreString(String s, int[] indices) {
        
        char[] c = new char[s.length()];
        
        for (int i =0; i<indices.length; i++){
            
            c[indices[i]] = s.charAt(i);
        }
        
        s= String.valueOf(c);
        return s;
    }
}
