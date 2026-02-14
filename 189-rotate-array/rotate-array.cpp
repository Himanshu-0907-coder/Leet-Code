class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        int idx = n-k-1;
        vector<int> v;
        for(int i=idx+1;i<n;i++){
            v.push_back(nums[i]);
        }
        for(int i=0;i<=idx;i++){
            v.push_back(nums[i]);
        }
        nums = v;
    }
};