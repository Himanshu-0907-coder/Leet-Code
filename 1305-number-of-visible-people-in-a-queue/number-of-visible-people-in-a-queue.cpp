class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n);
        ans[n-1] = 0;
        st.push(nums[n-1]);

        for(int i=n-2;i>=0;i--){
            int count = 0;
            while(st.size()>0 && st.top()<=nums[i]){
                st.pop();
                count++;
            }
            if(st.size() == 0){
                ans[i] = count;
            }
            else{
                count++;
                ans[i] = count;
            }
            st.push(nums[i]);
        }
        return ans;
    }
};