class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = i+1;

        vector<int> arr(n);
        int k = 0;
        while(k<n){
            if(nums[k]>0){
                arr[i] = nums[k];
                i += 2;
            }
            else{
                arr[j] = nums[k];
                j += 2;
            }
            k++;
        }
        
        return arr;
    }
};