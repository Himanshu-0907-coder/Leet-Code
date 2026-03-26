class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int ans = target - nums[i];
            if(map.find(ans) != map.end()){
                v.push_back(map[ans]);
                v.push_back(i);
            }
            else map[nums[i]] = i;
        }
        return v;
    }
};