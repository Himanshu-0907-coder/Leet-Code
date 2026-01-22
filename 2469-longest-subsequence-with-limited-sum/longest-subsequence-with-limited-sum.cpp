class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<int> ans(m);
        //sort
        sort(nums.begin(),nums.end());

        //prefix sum
        for(int i=1;i<n;i++){
            nums[i] += nums[i-1];
        }
        //find
        // for(int i=0;i<m;i++){
        //     int len = 0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]>queries[i]) break;
        //         len++;
        //     }
        //     ans[i] = len;
        // }
         for(int i=0;i<m;i++){
            int maxlen = 0;
            int lo = 0;
            int hi = n-1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]>queries[i]) hi = mid - 1;
                else{ // nums[mid]<=querie[i]
                    maxlen = mid+1;
                    lo = mid + 1;
                }
            }
            ans[i] = maxlen;
        }
        return ans;
    }
}; 