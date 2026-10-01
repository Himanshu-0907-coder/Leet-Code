class Solution {
public:
    string orderlyQueue(string s, int k) {
        //If k>1 sor we sort
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }

        int n = s.length();
        string result = s;
        for(int i=0;i<n;i++){
            string temp = s.substr(i) + s.substr(0,i);
            result = min(result,temp);
        }
        return result;
    }
};