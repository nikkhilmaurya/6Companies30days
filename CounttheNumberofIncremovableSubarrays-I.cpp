class Solution {
public: 
    bool check(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int first = INT_MIN;
        for(int i = 0; i < n; i++) {
            if ((l <= i) && (i <= r)) continue;
            if (first >= nums[i]) return false;
            first = nums[i];
        }
        return true;
    }

    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int l = 0; l < n; l++) {
            for(int r = l; r < n; r++)   if(check(nums, l, r)) res++;
        }
        return res;
    }
    
};

