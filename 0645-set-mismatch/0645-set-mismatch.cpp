class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
int n = nums.size();
vector<int>f(n+1,0);
for(int x:nums)
f[x]++;
int a , b = 0;
for(int i = 1;i<=n;i++){
    if(f[i]==2)
    a = i;
    if(f[i]==0)
    b = i;
}
return{a,b};

}


};