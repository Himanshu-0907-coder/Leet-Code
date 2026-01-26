class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size(); 

        // int lo = 0;
        // int hi = nums.size()-1;
        // while(lo<=hi){
        //     int mid = lo+(hi-lo)/2;
        //     if(nums[mid] == mid) lo = mid + 1;
        //     else if(nums[mid]>mid) hi = mid - 1;
        // }
        // return lo;
    }    
};