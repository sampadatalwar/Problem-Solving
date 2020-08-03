
public class ShuffleArray_1470 {
	
	public static void main(String[] args) {
		
		int [] arr = {2,5,1,3,4,7};
		
		arr = shuffle(arr,3);
		
		System.out.print("Shuffled array: [" );
		
		for(int i=0; i<arr.length-1; i++) {
			System.out.print(arr[i]+ ",");
		}
		System.out.println(arr[arr.length-1]+"]");
	}
	// Return and try to reduce the amount of memory consumed.
	public static int[] shuffle(int[] nums, int n) {
    
		int[] num = new int[nums.length];
		int j = 0;
    
		for(int i =0; i<n; i++){
       
			num[j] = nums[i];
			num[j+1] = nums[i+n];
			j = j+2;
		}
		
		return num;
	}

}
