class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string ans = "";
        int i = 0;
        while(i<s.length()){
            if(s[i] != ' '){
                word += s[i];
            }
            else{
                reverse(word.begin(),word.end());
                ans += word;
                ans += ' ';
                word = "";
            }
            i++;
        }
        // last word
        reverse(word.begin(),word.end());
        ans += word;
        return ans;
    }
};