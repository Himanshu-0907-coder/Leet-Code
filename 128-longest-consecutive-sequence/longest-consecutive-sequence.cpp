class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxLength = 0;

        for(int num : s) {
            // Only start counting if num is the start of a sequence
            if(s.find(num - 1) == s.end()) {
                int currentNum = num;
                int length = 1;

                while(s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    length++;
                }

                maxLength = max(maxLength, length);
            }
        }

        return maxLength;
    }
};