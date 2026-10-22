class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        bool perfect = false;
        for (int i=1;i<num;i++){
            if (num%i==0){
                sum=sum+i;
            }
        } 
        if (num==sum){
            perfect=true;
        }
        return perfect;
    }
};