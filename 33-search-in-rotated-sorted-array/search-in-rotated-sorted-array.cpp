class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = -1;
        int low = 0;
        int high = n-1;

        if(n==2){
            if(target == nums[0]) return 0;
            else if(target == nums[1]) return 1;
            else return -1;
        }

        while(low<=high){
            int mid = low +(high-low)/2;
            if(mid == 0) low = mid+1;
            else if(mid == n-1) high = mid-1;
            else if(nums[mid] < nums[mid+1] && nums[mid] < nums[mid-1]){
                pivot = mid;
                break;
            }
            else if(nums[mid] > nums[mid+1]){   // ✅ fixed pivot condition
                pivot = mid+1;
                break;
            }
            else if(nums[mid] > nums[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        if(pivot == -1){
            low = 0;
            high = n-1;
            while(low<=high){
                int mid = low +(high-low)/2;
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] > target){
                    high = mid - 1;
                }
                else{
                    low = mid + 1; 
                }
            }
            return -1;
        }

        // ✅ fixed condition: must be >= nums[0] && <= nums[pivot-1]
        if(target >= nums[0] && target <= nums[pivot-1]){
            low = 0;
            high = pivot-1;
            while(low<=high){
                int mid = low +(high-low)/2;
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] > target){
                    high = mid - 1;
                }
                else{
                    low = mid + 1; 
                }
            }
        }
        else{
            low = pivot;
            high = n-1;
            while(low<=high){
                int mid = low +(high-low)/2;
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] > target){
                    high = mid - 1;
                }
                else{
                    low = mid + 1; 
                }
            }
        }    
        return -1;
    }
};
