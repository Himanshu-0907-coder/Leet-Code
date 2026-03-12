class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        for(int i=0;i<nums.size();i++){
            v[i] = nums[i] * nums[i];
        }
        sort(v.begin(),v.end());
        return v;
    }
};