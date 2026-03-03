class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        vector<int> nsi(n), psi(n);
        stack<int> st;

        // Next Smaller Index (Right)
        nsi[n-1] = n;
        st.push(n-1);

        for(int i = n-2; i >= 0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            nsi[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // clear stack
        while(!st.empty()) st.pop();

        // Previous Smaller Index (Left)
        psi[0] = -1;
        st.push(0);

        for(int i = 1; i < n; i++){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            psi[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        int maxArea = 0;
        for(int i = 0; i < n; i++){
            int height = nums[i];
            int width = nsi[i] - psi[i] - 1;
            maxArea = max(maxArea, height * width);
        }

        return maxArea;
    }
};