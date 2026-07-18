class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int o = nums2.size();

        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums1[i]);
        }

        vector<int> ans;
        for(int x:st){
            if(find(nums2.begin(),nums2.end(),x) != nums2.end()){
                ans.push_back(x);
            }
        }
        return ans;
    }
};