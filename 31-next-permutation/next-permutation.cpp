class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        //pivot idx
        int idx = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        // if no element found
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        int j = -1;
        for(int i=n-1;i>idx;i--){
            if(nums[i]>nums[idx]){
                j = i;
                break;
            }
        }
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;

        //reverse kardo idx+1 se baki number mil jaiga
        reverse(nums.begin()+idx+1,nums.end());

    }
};