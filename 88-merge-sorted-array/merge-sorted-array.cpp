class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 1 && n == 0) nums1;
        
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int> ans(m+n);

        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                ans[k] = nums1[i];
                k++;
                i++;
            }
            else{
                ans[k] = nums2[j];
                k++;
                j++;
            }
        }
        while(i<m){
            ans[k] = nums1[i];
            i++;
            k++;
        }
        while(j<n){
            ans[k] = nums2[j];
            j++;
            k++;
        }
        nums1 = ans;
    }
};