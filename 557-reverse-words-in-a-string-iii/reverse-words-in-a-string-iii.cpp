class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> words;
        int i = 0;
        while(i<s.length()){
            if(s[i] == ' '){
                if(word != ""){
                    reverse(word.begin(),word.end());
                    words.push_back(word);
                    word = "";
                }
                words.push_back(string(1, s[i]));
                i++;
            }
            else{
                word += s[i];
                i++;
            }
        }
        if(word != ""){
            reverse(word.begin(),word.end());
            words.push_back(word);
        }
        string ans;
        for(int i=0;i<words.size();i++){
            ans += words[i];
        }

        return ans;
    }
};