class Solution {
public:
    int countPrimes(int n) {
       int prime_cnt=0;
       for (int i=2;i<n;i++){
        int count=0;
        bool prime=true;
        if (i<=2){
            return 0;
        }
        
            for(int j=2;j<i;j++){
                if(i%j==0){
                    count++;
                    break;
                }
            }
        
        if (count>1){
            prime =false;

        }
        if (prime==true){
        prime_cnt++;
       }
       } 
       return prime_cnt;
    }
};