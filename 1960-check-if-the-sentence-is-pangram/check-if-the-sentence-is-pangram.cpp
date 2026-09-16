class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26,0);

        for(auto n : sentence){
            int idx = n - 'a';
            arr[idx]++;
        }   

        for(auto n : arr){
            if(n == 0){
                return false;
            }
        }
        return true;

    }
};