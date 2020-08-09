import java.util.*;

public class ProductSumDifference_1281 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int n = sc.nextInt();
		
		sc.close();
		
		System.out.println("Difference of product and sum is : " + subtractProductAndSum(n));
	}
	
	public static int subtractProductAndSum(int n) {
        
        int product = 1;
        
        int sum = 0;
        
        while(n != 0){
            
            int num = n%10;
            
            product = product * num;
            
            sum = sum + num;
            
            n = n/10;
            
            
        }
        return (product - sum);
    }

}
