class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int o = nums2.size();

        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums1[i]);
        }

        set<int> ans;
        for(int x : nums2){
            if(st.find(x)!= st.end()){
                ans.insert(x);
            }
        }
        vector<int> a;
        for(int x : ans){
            a.push_back(x);
        }
        return a;
    }
};