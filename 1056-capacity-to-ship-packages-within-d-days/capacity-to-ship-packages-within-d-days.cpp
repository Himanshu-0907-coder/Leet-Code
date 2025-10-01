class Solution {
    
public:
bool check(vector<int> &weight,int days,int mid){
    int n = weight.size();
    int m = mid;
    int count =1;
    for(int i=0;i<n;i++){
        if(m>=weight[i]){
            m -= weight[i];
        }
        else{
            count++;
            m = mid;
            m -= weight[i];
        }
        
    }
    return count <= days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        
    int n = weights.size();
    
    int sum = 0;
    int max = 0;
    for(int i=0;i<n;i++){
        sum += weights[i]; 
        if(max<weights[i]){
            max = weights[i];
        }
    }
    

    int lo = max;
    int hi = sum;
    int ans = sum;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check(weights,days,mid)==true){
             ans = mid;
             hi = mid - 1; 
        }
        else{
            lo = mid + 1;
        }
       
    }
    return ans;
    }
};