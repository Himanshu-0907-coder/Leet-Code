class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int count = 1;
    if(n == 0){
        return {};
    }
    vector<int> v;
    vector<int> countvec;

    
    for(int i =1;i<n;i++){
        if(nums[i]==nums[i-1]){
            count++;
        }
        else{
            v.push_back(nums[i-1]);
            countvec.push_back(count);
            count = 1;
        }
            
    }
    v.push_back(nums[n-1]);
    countvec.push_back(count);

    for(int i = 0; i < v.size() - 1; i++) {
            for(int j = i+1; j < v.size(); j++) {
                if(countvec[i] < countvec[j]) {  // sort descending by count
                    swap(countvec[i], countvec[j]);
                    swap(v[i], v[j]);
                }
            }
        }
    vector<int> z;
    for(int i =0;i<k && v.size();i++){
           z.push_back(v[i]);
    }
    return z;
    }
};