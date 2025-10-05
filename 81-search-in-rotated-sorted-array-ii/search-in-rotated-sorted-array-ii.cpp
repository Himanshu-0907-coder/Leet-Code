class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n =nums.size();
        if (n == 0) return false;

        
        int pivot = 0;
        for(int i =1;i<n;i++){
            if(nums[i]<nums[i-1]){
               pivot = i;
               break;
            }
        }
        // if(nums[pivot] == nums[pivot-1]){
        //     pivot = pivot - 1;
        // }
        //Before pivot
        if(pivot>0){
            int lo = 0;
            int hi = pivot -1;
            while(lo<=hi){
                int mid = lo +(hi-lo)/2;
                if(nums[mid] == target) return true;
                else if(nums[mid] > target) hi = mid - 1;
                else lo = mid + 1;
            }
        }
        //From pivot
        
        int lo = pivot;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(nums[mid] == target) return true;
            else if(nums[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
        return false;
    }
};