class Solution {
public:
    int maxPower(string s) {
        int pow=1;
        int maxpow=1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]==s[i]){
                pow++;
            }
            else{
                maxpow=max(pow,maxpow);
                pow=1;
            }
        }
        return max(pow,maxpow);
    }
};