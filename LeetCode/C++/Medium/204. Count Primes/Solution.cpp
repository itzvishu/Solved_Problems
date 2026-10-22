class Solution {
public:
    int countPrimes(int n) {
    bool prime=true;
    int count=0;
    int prime_count=0; 
    if (n<=2){
        prime=false;
    }
    // if (n==2){
    //     prime_count=0;
    // }
    for (int i=0;i<n;i++){
    for (int i=2;i<n;i++){
        if (n%i==0){
            count++;

        }
    }
    if (count>1){
        prime =false;
    }
    if (prime==true){
        prime_count++;
    }
    
    }
    return prime_count-2;
    }
};