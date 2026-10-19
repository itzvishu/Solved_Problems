class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if (n == 0) {return 0};
        k=k%n;
        
       for(int j=1;j<=k;j++){
       
        int last=nums[n-1];
        for(int i=n-1;i>0;i--){
            
            nums[i]=nums[i-1];
            
            
        }
        nums[0]=last;
       }
    }
};