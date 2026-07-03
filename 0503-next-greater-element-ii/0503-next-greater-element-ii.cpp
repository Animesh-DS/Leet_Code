class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> s;
        for(int i=nums.size()-1;i>=0;i--){
            while(!s.empty()&&s.top()<=nums[i]){
                s.pop();
            }
            if(s.empty()){
                //repeat seach in i-1 section
                stack<int>t;
                for(int j = i-1;j>=-1;j--){
                    while(!t.empty()&&t.top()<=nums[i]){
                        t.pop();
                    }
                    if(t.empty()) ans[i] = -1;
                    else ans[i]=t.top();

                    if(j==-1) break;
                    t.push(nums[j]);
                }
            }
            else ans[i] = s.top();

            s.push(nums[i]);
        }
        return ans;
    }
};