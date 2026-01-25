class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx ;
        for(int i=0;i<nums.size();i++){
            if(i != nums[i]){
                idx = i;
                break;
            }
        }
        return idx;
    }
};