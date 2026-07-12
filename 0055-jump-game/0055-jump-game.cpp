int max(int a,int b){
    if(a>=b) return a;
    else return b;
}

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(i>maxreach) return false;
            maxreach = max(maxreach,i+nums[i]);
        }
        if(maxreach>=nums.size()-1){
            return true;
        }
        else{
            return false;
        }
    }
};