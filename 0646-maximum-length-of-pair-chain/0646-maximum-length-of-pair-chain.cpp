class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
sort(pairs.begin(),pairs.end());
int n =pairs.size();
vector<int>ans(n,1);
int result = 1;
for(int i = 1;i<n;i++){
    for(int j = 0;j<i;j++){
if(pairs[j][1]<pairs[i][0])
ans[i]=max(ans[i],ans[j]+1);
    }
    result = max(result,ans[i]);
}
return result;










    }
};