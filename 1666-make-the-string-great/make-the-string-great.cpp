class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        
        string result = "";

        for(int i=0;i<n;i++){
            if(!result.empty() && (result.back()-32 == s[i] || result.back()+32 == s[i])){
                result.pop_back();
            }
            else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};