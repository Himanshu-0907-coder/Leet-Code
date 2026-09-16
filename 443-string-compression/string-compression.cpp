class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        int i = 0;
        int idx = 0;
        while(i<n){
            char curr_char = chars[i];
            int count = 1;
            while(i+1<n && chars[i] == chars[i+1]){
                count++;
                i++;
            }

            chars[idx] = curr_char;
            idx++;
            if(count > 1){
                string count_num = to_string(count);
                for(auto n : count_num){
                    chars[idx] = n;
                    idx++;
                }
            }
            i++;
        }
        return idx;
    }
};