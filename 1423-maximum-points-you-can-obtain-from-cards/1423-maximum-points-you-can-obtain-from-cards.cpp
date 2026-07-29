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
        
        int currAns=ans;

        for(int i=0;i<k;i++){
            currAns = currAns-nums[backptr]+nums[frontptr];

            ans = Max(ans,currAns);
            frontptr++;
            backptr++;
        }

        return ans;
    }
};