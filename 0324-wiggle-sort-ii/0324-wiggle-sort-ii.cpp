class Solution {
public:
    void wiggleSort(vector<int>& nums) {
sort(nums.begin(),nums.end());
int n = nums.size();

vector<int> v(n);
int l = (n+1)/2 - 1;
int r = n-1;
for(int i = 0;i<n;i++){
    if(i%2==0)
    v[i]=nums[l--];
    else v[i] = nums[r--];
}
nums=v;

    }
};