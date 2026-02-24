class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // if(nums.size() == 1) return nums[0];
        sort(nums.begin(),nums.end());
        // int count = 0;
        // int maxCount = INT_MIN;
        // int ans;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i] == nums[i-1]){
        //         count++;
        //         if(maxCount < count){
        //             ans = nums[i];
        //             maxCount = max(maxCount,count);
        //         }
        //     }
        //     else{
        //         count = 0;
        //     }
        // }
        // return ans;
        return nums[(nums.size())/2];
    }
};