string compressor(string num){
    string final = "";
    int i=0;
    while(i<num.length()){
        int ctr=0;
        char curr = num[i];
        while(i<num.length() && num[i]==curr){
            ctr++;
            i++;
        }
        final+= to_string(ctr)+curr;
    }
    return final;
}

class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        return compressor(countAndSay(n-1));
    }
};