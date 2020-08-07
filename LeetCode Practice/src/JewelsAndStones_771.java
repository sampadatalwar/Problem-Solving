
public class JewelsAndStones_771 {
	
	public static void main(String[] args) {
		
		int numberOfJewels = numJewelsInStones("aA","aAAbbbb");
		
		System.out.println(numberOfJewels);
	}
	
	public static int numJewelsInStones(String J, String S) {
        
        int count = 0;
        
        for (char j : J.toCharArray()){
            
            for(char s : S.toCharArray()){
                
                if(j==s)
                    count++;
            }
        }
        
        return count;
        
    }
}

