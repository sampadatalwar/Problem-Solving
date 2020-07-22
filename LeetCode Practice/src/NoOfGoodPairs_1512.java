import java.util.*;

public class NoOfGoodPairs_1512 {
	
	public static void main(String[] args) {
		
		int[] nums = {1,2,3,1,1,3};
		
		System.out.println("Number of good pairs are "+ numIdenticalPairs(nums));
		
		System.out.println("Number of good pairs are "+ goodPairs(nums));	//Optimized
		
	}
	
	public static int numIdenticalPairs(int[] nums) {
        int count = 0;
        
        for(int i=0; i<nums.length-1; i++){
            
           for(int j=i+1; j<nums.length; j++){
               
               if(nums[i]==nums[j]){
            	   //System.out.println(nums[i]+" "+nums[j]);
                   count++;
               }
           } 
        }
      return count;  
    }
	
	public static int goodPairs(int[] nums) {		//Optimized
		Map<Integer, Integer> map = new HashMap<>();
		
		for(int i : nums) {
			if(!map.containsKey(i)) {
				map.put(i, 1);
			}
			
			else {
				int c= map.get(i);
				map.put(i, ++c);
			}
		}
		
		int count = 0;
		
		for(int i:map.keySet()) {
			count+= (map.get(i)*(map.get(i)-1))/2;
		}
		
		return count;
		
	}

}
