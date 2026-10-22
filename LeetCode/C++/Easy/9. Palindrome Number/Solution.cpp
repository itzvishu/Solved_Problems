class Solution {
public:
    bool isPalindrome(int x) {
        bool pal=false;
        int org=x;//at last yhe x becomes zero so we have to store it somewhere int order to compare with reversed number to get palindrome
        int n=0;
        int rev_num=0;
        if(x<0){
            return false;
        }
        
        
        while(x>0){
            n=x%10;
            x=x/10;
            rev_num=rev_num*10+n;
        }
        
        if(org==rev_num){
            pal= true;}
        return pal;
    }
};