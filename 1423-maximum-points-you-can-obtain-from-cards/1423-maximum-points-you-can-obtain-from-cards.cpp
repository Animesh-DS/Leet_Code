class Solution {
public:
    int Max(int a,int b){
        if(a>=b) return a;
        return b;
    }

    int maxScore(vector<int>& nums, int k) {
        int ans = 0;

        int arrSize = nums.size();
        int backptr = arrSize-k;
        int frontptr = 0;
        
        for(int i=arrSize-1;i>=arrSize-k;i--){
            ans+=nums[i];
        }
        
        int tempAns=ans;
        
        for(int i=0;i<k;i++){
            int currAns = tempAns-nums[backptr]+nums[frontptr];
            tempAns = currAns;
            ans = Max(ans,currAns);
            frontptr++;
            backptr++;
        }

        return ans;
    }
};