class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& nums) {
        int n = nums.size();
        unordered_set<string> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }

        int count = 0;
        for(int i=0;i<n;i++){
            string rev = nums[i];
            reverse(rev.begin(),rev.end());
            if(nums[i] == rev) continue;
            if(s.find(rev) != s.end()){
                count++;
                s.erase(nums[i]);
            }
        }
        return count;
    }
};