class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        
        int j=-1;
        
        //find the first zero 
        
        for(int i=0;i<n;i++){
            if (nums[i]==0){
                j=i;
                break; //if first zero is found break the loop 

            }
        }

        if(j==-1) return;
        
        // if no no zero is found do nothing 
        
        for(int i=j+1;i<n;i++){
            //i will be increasing 
            if(nums [i]!=0){
                // j will increase only when we have element at i is non zero   
                swap (nums[i],nums[j]);
                j++;
            }
        }
    }
};