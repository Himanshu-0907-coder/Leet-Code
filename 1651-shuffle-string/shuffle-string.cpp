class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        int m = indices.size();
        vector<string> ans(n);
        for(int i=0;i<min(n,m);i++){
            ans[indices[i]] = s[i];
        }
        string fans = "";
        for(int i=0;i<n;i++){
            fans += ans[i];
        }
        return fans;
    }
};