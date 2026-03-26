class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        //insertinf element in map1 of string s
        for(int i=0;i<s.length();i++){
            map1[s[i]]++; // charcater insert bhi kar rhe aur length bhi badha rhe;
        }
        for(int i=0;i<s.length();i++){
            map2[t[i]]++; // insert bhi kar rhe aur length bhi badha rhe;
        }
        //checking for anagram
        for(auto ele : map1){
            char ch1 = ele.first;
            int freq = ele.second;
            if(map2.find(ch1) != map2.end()){
                int freq2 = map2[ch1];
                if(freq != freq2) return false;
            }
            else return false;
        }
        return true;
    }
};