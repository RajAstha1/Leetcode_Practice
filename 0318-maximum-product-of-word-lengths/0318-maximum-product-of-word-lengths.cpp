class Solution {
public:
    int maxProduct(vector<string>& words) {
       int n = words.size();
       int ans = 0;
       for(int i = 0;i<n;i++){
        bool a[26]={};
        for(char c:words[i])
        a[c-'a']= true;
        for(int j =i+1;j<n;j++){
bool com = false;
for(char c : words[j]){
    if(a[c-'a']){
        com = true;
        break;
    }
}
if(!com){
    int p = words[i].size()*words[j].size();
    ans = max(ans,p);

    
}
        }       
    }
    return ans;
    }
};