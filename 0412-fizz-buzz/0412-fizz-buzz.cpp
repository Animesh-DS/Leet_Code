class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;

        for(int i=1;i<=n;i++){
            float div3 = i/3.0;
            float div5 = i/5.0;
            int int3 = div3;
            int int5 = div5;
            float res3 = div3-int3;
            float res5 = div5-int5;

            if(res3==0 && res5==0) ans.push_back("FizzBuzz");
            else if(res3==0) ans.push_back("Fizz");
            else if(res5==0) ans.push_back("Buzz");
            else ans.push_back(to_string(i));
        }
        return ans;
    }
};