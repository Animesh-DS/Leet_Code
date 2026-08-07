class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int global_max = nums[0];
        int curr_max = nums[0];
        
        for(int i=1;i<nums.size();i++){
            
            if(curr_max+nums[i]>nums[i]){
                curr_max=curr_max+nums[i];
            }
            else{
                curr_max = nums[i];
            }

            if(curr_max>global_max) global_max=curr_max;
        }

        return global_max;

    }
};