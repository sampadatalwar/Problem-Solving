
public class ReduceNumberToZero_1342 {
	
	public static void main(String[] args) {
		
		ReduceNumberToZero_1342 obj = new ReduceNumberToZero_1342();
		
		int n = obj.numberOfSteps(14);
		
		System.out.println(n);
		
	}
	
	public int numberOfSteps (int num) {
        
        int count = 0;
        
        while(num!=0){
            
            num = (num%2) == 0 ? num / 2 : num - 1;
            
            count++;
        }
        return count;
    }


}
