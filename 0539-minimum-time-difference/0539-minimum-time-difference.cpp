class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> t;
        for(string s:timePoints){
        int h = stoi(s.substr(0,2));
        int m = stoi(s.substr(3,2));
        t.push_back(h*60+m);
        }
       sort(t.begin(),t.end());
       int ans = 1440;  
       for(int i =1;i<t.size();i++){
        ans = min(ans,t[i]-t[i-1]);
       } 
       ans = min(ans,1440-t.back()+t[0]);
       return ans;
    }
};