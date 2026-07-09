class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto x : mp){
            int var = x.first;
            ans.push_back(var);
        }

        nums = ans;
        return nums.size();
    }
};