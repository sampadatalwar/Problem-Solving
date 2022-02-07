class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        
        long n=x, num=0;
        
        while(n>0){
            //cout<<n%10<<endl;
            num = num*10 + n%10;
            n = n/10;
        }
        
        return num == x;
    }
};