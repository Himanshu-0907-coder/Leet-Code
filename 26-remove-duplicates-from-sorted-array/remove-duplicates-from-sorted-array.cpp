class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        vector<int> v;
        int count = 0;
        v.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                count++;
            }
            else{
                v.push_back(nums[i]);
            }
        }
        nums = v;
        return nums.size();
    }
};