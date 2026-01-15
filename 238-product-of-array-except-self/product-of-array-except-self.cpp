class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();

        int prod = 1;
        vector<int>a1;
        for(int i=0;i<n;i++){
            a1.push_back(prod);
            prod = prod * nums[i];
        }

        prod = 1;
        vector<int>a2;
        for(int i=n-1;i>=0;i--){
            a2.push_back(prod);
            prod = prod * nums[i];
        }

        reverse(a1.begin(),a1.end());
        vector<int>ans(n);
        for(int i =0;i<n;i++){
            ans[i] = a1[i] * a2[i];
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};