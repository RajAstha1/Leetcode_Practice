class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>  o = nums;
        sort(o.begin(),o.end());
        int n = nums.size();
        int l = 0;
        int r = n-1;
        while(l<n && nums[l]==o[l])
            l++;
        if(l==n)
        return 0;
        while(nums[r]==o[r])
        r--;
        return r-l+1;

















    }
};