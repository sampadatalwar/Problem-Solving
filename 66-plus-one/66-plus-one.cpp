class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry = 0;
        
        if(digits.size() == 0)
            return digits;
        
        if(digits.size() == 1){
            
            if(digits[0] == 9){
            digits[0] = 0;
            digits.insert(digits.begin(),1);
            }
            else{
                digits[0] = digits[0]+1;
            }
            
            return digits;
        }
        
        if(digits[digits.size()-1] < 9){
            
            digits[digits.size()-1] = digits[digits.size()-1] + 1;
            
            return digits;
            
        }else{
            digits[digits.size()-1] = 0;
            carry = 1;
        } 
        
        for(int i=digits.size()-2; i>=1; i-- ){
            
            cout<<i<<endl;
            
            if(carry > 0){
            
                int sum = digits[i]+carry;
                
                if( sum > 9){
                
                digits[i] = sum%10;
                carry = sum/10;
                
            }else{
                cout<<"carry 0"<<endl;
                digits[i] = sum;
                carry = 0;
                break;
                //return digits;
                
            }
            
            }else
                break;

        }
        
        if(digits[0] == 9 && carry == 1){
            
            digits[0] = 0;
            digits.insert(digits.begin(),1);
        }else if(digits[0] < 9 && carry == 1){
            
            digits[0] = digits[0]+1;
            
        }else{
            //digits[0] = digits[0]+1;
            
        }
        
        
        return digits;
        
    }
};