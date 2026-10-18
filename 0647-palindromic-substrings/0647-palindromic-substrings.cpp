class Solution {
public:
    int countSubstrings(string s) {
int n = s.length();
int count = 0;
for(int i = 0;i<n;i++){
    for(int j = i;j<n;j++){
        string sub = s.substr(i,j-i+1);
        string rev = sub;
        reverse(rev.begin(),rev.end());
        if(sub == rev){
            count++;
        }
            }
}
return count;
        
    }
};