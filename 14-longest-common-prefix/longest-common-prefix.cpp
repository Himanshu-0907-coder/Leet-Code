class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string result = "";
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];
        int size = min(first.size(), last.size());
        for(int i=0;i<size;i++){
            if(first[i] != last[i]){
                break;
            }
            result += first[i];
        }
        if(result == "") return "";
        return result;
    }
};