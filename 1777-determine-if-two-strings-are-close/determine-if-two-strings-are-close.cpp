class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        if(m != n) return false;

        for(int i=0;i<m;i++){
            char ch1 = word1[i];
            char ch2 = word2[i];

            int idx1 = ch1 - 'a';
            int idx2 = ch2 - 'a';

            freq1[idx1]++;
            freq2[idx2]++;
        }

        //1st Point :- jo char word1 me hai wo char word2 me bhi ho
        for(int i=0;i<26;i++){
            if(freq1[i] !=0 && freq2[i] != 0 ) continue;
            if(freq1[i] == 0 && freq2[i] == 0) continue;
            return false;
        }
        //Match frequency
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());

        return freq1 == freq2;
    }
};