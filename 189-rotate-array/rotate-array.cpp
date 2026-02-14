class Solution {
public:
    void reversePart(vector<int> &nums,int i,int j){
        while(i<j){
            int t = nums[i];
            nums[i] = nums[j];
            nums[j] = t;
            i++;
            j--;
        }
    } 
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // k=k%n;
        // int idx = n-k-1;
        // vector<int> v;
        // for(int i=idx+1;i<n;i++){
        //     v.push_back(nums[i]);
        // }
        // for(int i=0;i<=idx;i++){
        //     v.push_back(nums[i]);
        // }
        // nums = v;
        int n = nums.size();
        k = k%n;
        //whole array reverse
        reversePart(nums,0,n-1);

        //reverse ing th k element
        reversePart(nums,0,k-1);

        //reversing the n-k element
        reversePart(nums,k,n-1);
        
        

    }
};