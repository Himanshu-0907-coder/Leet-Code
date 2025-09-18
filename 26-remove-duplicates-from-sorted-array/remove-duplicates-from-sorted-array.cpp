class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if(n == 0 ) return 0;

        vector<int> v;
        v.push_back(nums[0]);

        int count = 0;
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                count++;
            }
            else{
                v.push_back(nums[i]);
            }
            
        }
        nums = v;
        return v.size();
    }
};