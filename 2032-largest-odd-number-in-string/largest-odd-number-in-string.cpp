class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int idx = -1;
        int i = num.length()-1;
        while(i>=0){
            if((num[i] - '0')%2 == 0){
                i--;
            }
            else{
                idx = i;
                i--;
                break;
            }
        }
        if(idx == -1) return "";
        for(int j=0;j<=idx;j++){
            ans += num[j];
        }

        return ans;
    }
};