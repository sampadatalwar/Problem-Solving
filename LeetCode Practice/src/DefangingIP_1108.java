import java.util.*;

public class DefangingIP_1108 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter IP Adress");
		String address = sc.nextLine();
		sc.close();
		address = defangIPaddr(address);
		
		System.out.println(address);
	}
	
	public static String defangIPaddr(String address) {
        
        int count = 0, j=0;
        
        for (int i=0; i<address.length(); i++){
            
            if(address.charAt(i) == '.')
                count++;
        }
        
        char[] adr = new char[address.length() + (count*2)];
        
        for (int i=0; i<adr.length; i++){
            
            if(address.charAt(j) == '.'){
                
                adr[i] = '[';
                adr[i+1] = '.';
                adr[i+2] = ']';
                i+=2;
            }
            
            else
                adr[i] = address.charAt(j);
            j++;
                
        }
        
        String addr = String.valueOf(adr);
        
        addr = addr.replace("\u0000", "");
        
        return addr;
         
    }

}
