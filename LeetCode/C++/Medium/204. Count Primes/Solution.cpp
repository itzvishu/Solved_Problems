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
    for (int j=0;j<n;j++){
    for (int i=2;i<j;i++){
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
    return prime_count;
    }
};