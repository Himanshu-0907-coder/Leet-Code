class Solution {
public:
    bool checkZeroOnes(string s) {
        int coz = 0;
        int coo = 0;
        int zeroMax = INT_MIN;
        int oneMax = INT_MIN;
        for(int i=0;i<s.length();i++){
            if(s[i] == '1'){
                coo++;
                coz = 0;
                oneMax = max(oneMax,coo);
            }
            else{
                coz++;
                coo = 0;
                zeroMax = max(zeroMax,coz);
            }
        }
        if(oneMax<=zeroMax){
            return false;
        }

        return true;
    }
};