class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v(m+n);
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i >= 0 && j >= 0){
            if(nums1[i]> nums2[j]){
                v[k] = nums1[i];
                i--;
            }
            else{
                v[k] = nums2[j];
                j--;
            }
            k--;
        }
        while(i >= 0){
            v[k] = nums1[i];
            i--;
            k--;
        }
        while(j >= 0){
            v[k] = nums2[j];
            j--;
            k--;
        }
        nums1 = v;
    }
};