class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
vector<long long> ans(k,0);
//p%k=r
vector<long long> s(k,0);
for(int x: nums){
    vector<long long>next(k,0);
    next[x%k]++;
    for(int r = 0;r<k;r++){
        if(s[r]==0)
    continue;
    int result = (r*(x%k))%k;
    next[result]+=s[r];

    }
    for(int r = 0;r<k;r++){
        ans[r]+=next[r];
    }
    s=next;
}
return ans;


    }
};