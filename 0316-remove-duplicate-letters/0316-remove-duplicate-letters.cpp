class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> f,u;
        string ans;
        for(char c : s) f[c]++;
        for(char c : s){
            f[c]--;
            if(u[c])
            continue;
            while(!ans.empty()&& ans.back()>c && f[ans.back()]>0){
                u[ans.back()] = 0;
                ans.pop_back();
            }
            ans+=c;
            u[c]=1;
        }
        return ans;


    }
};