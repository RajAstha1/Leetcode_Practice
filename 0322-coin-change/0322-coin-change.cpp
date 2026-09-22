class Solution {
public:
vector<int>n;
int coincount(vector<int>& coins, int amount){
    if(amount == 0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }
    if(n[amount]!=-1){
return n[amount];
    }
int min_coins = INT_MAX;
for(int i = 0;i<coins.size();i++){
    int ans = coincount(coins,amount-coins[i]);
    if(ans!=INT_MAX){
        min_coins = min(min_coins,1+ans);

    }

}
n[amount] = min_coins;
return min_coins;
    }
    int coinChange(vector<int>& coins, int amount) {
        n.assign(amount+1,-1);
        int ans = coincount(coins,amount);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};