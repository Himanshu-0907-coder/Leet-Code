class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = accumulate(word1.begin(),word1.end(),string(""));
        string w2 = accumulate(word2.begin(),word2.end(),string(""));
        return w1 == w2;
    }
};