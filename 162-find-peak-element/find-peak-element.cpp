class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int max = nums[0]; 
        int maxstore = 0;
        for(int i =0;i<n;i++){
            if(nums[i]>max){
                max = nums[i];
                maxstore = i;
            }
        }
        return maxstore;
    }
};