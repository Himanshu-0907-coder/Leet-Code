class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> ans;

        int lo = 0, hi = n - 1, mid = -1;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (arr[mid] == x) {
                break;
            }
            else if (arr[mid] > x) hi = mid - 1;
            else lo = mid + 1;
        }

        int left, right;
        if (mid != -1 && arr[mid] == x) {
            ans.push_back(arr[mid]);
            left = mid - 1;
            right = mid + 1;
            k--;
        }
        else {
            left = hi;
            right = lo;
        }

        while (k--) {
            if (left < 0) {
                ans.push_back(arr[right]);
                right++;
            }
            else if (right >= n) {
                ans.push_back(arr[left]);
                left--;
            }
            else {
                int ld = abs(x - arr[left]);
                int rd = abs(x - arr[right]);
                if (ld <= rd) {
                    ans.push_back(arr[left]);
                    left--;
                }
                else {
                    ans.push_back(arr[right]);
                    right++;
                }
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
