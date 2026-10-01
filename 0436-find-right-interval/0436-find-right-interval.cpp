class Solution {
public:
vector<int> findRightInterval(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<int> ans(n,-1);
    for(int i = 0;i<n;i++){
        int best = 1e9;
        for(int j = 0;j<n;j++){
            if(arr[j][0]>=arr[i][1] && arr[j][0]<best){
                best = arr[j][0];
                ans[i]=j;
            }

        }
    }
    return ans;







    }
};