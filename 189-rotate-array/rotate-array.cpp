class Solution {
public:
    void reverse(vector<int> &nums,int i,int j){
        while(i<j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;

        //Rev whole array
        reverse(nums,0,n-1);

        //rev k element
        reverse(nums,0,k-1);

        //reversing after k element
        reverse(nums,k,n-1);
    }
};