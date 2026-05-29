class Solution {
public:
    string reverseWords(string s) {
        string word = "";

        vector<string> words;
        int i = 0;
        while(i<s.length()){
            if(s[i] == ' '){
                
                if(word != ""){
                    words.push_back(word);
                    word = "";
                   
                }
                 i++;
            }
            else{
                word += s[i];
                i++;
            }
        }
        if(word != ""){
            words.push_back(word);
        }
        string ans = "";
        for(int j=words.size()-1;j>=0;j--){
            ans += words[j];
            if(j != 0){
                ans += ' ';  
            }
             
        }
        return ans;

    }
};