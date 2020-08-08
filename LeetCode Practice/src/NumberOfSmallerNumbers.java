
public class NumberOfSmallerNumbers {
	
	public static void main(String[] args) {
		
		int[] arr = {8,1,2,2,3};
		
		int[] res = smallerNumbersThanCurrent(arr);
		
		for(int i=0; i<res.length; i++) {
			
			System.out.println(res[i]);
		}
	}
		
	
	public static int[] smallerNumbersThanCurrent(int[] nums) {
        
        int[] result = new int[nums.length];
        int counter = 0;
        for (int i=0; i<nums.length; i++){
            
            for (int j=0; j<nums.length; j++){
                if (nums[j] < nums[i] && j!=i){
                    counter++;
                }
            }
            result[i] = counter;
            counter = 0;
        }
        return result;
	}

}
