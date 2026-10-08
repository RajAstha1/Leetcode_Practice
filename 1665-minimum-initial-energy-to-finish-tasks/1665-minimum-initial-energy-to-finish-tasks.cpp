class Solution {
public:
    int minimumEffort(vector<vector<int>>& t) {
int n = t.size();
for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(t[i][1]-t[i][0]<t[j][1]-t[j][0]){
            swap(t[i],t[j]);

        }

    }
}
int ans = 0 ;
int e = 0;
for(int i = 0;i<n;i++){
    if(e<t[i][1]){
ans+= t[i][1]-e;
e = t[i][1];
    }
    e-=t[i][0];

}

return ans;





    }
};