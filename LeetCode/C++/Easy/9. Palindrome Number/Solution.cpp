class Solution {
public:
    bool isPalindrome(int x) {
        bool pal=false;
        int org=x;
        int n=0;
        int rev_num=0;
        if(x==0){
            return 0;
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