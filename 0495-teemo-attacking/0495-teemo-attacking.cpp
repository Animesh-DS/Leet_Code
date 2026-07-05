class Solution {
public:
    int findPoisonedDuration(vector<int>& nums, int duration) {
        int total = duration;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]<duration) total+=nums[i+1]-nums[i];
            else total+=duration;
        }
        return total;
    }
};