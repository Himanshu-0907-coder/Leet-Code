class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }

        unordered_set<int> set;

        for(auto x : map){
            int value = x.second;
            if(set.find(value) != set.end()) return false;
            else set.insert(value);
        }
        return true;
    }
};