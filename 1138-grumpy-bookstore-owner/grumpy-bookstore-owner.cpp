class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;

        vector<int>& arr = customers;
        int n = arr.size();
        int prevLos = 0;
        for(int i=0;i<k;i++){
            if(grumpy[i] == 1) prevLos += arr[i];
        }
        int maxLoss = prevLos;
        int maxIdx = 0;
        int i=1;
        int j=k;
        while(j<n){
            int curLoss = prevLos;
            if(grumpy[j] == 1) curLoss += arr[j];
            if(grumpy[i-1] == 1) curLoss -= arr[i-1];

            if(maxLoss < curLoss){
                maxLoss = curLoss;
                maxIdx = i;
            }
            prevLos = curLoss;
            i++;
            j++;
        }
        //filling 0 in grumpy array
        for(int i=maxIdx;i<maxIdx + k;i++){
            grumpy[i] = 0;
        }
        //sum satisfatory
        int sum = 0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum += arr[i];
        }
        return sum;
    }
};