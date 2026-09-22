class Solution {
public:
    void wiggleSort(vector<int>& nums) {
sort(nums.begin(),nums.end());
int n = nums.size();
vector<int>small(nums.begin(),nums.begin()+(n+1)/2);
vector<int>large(nums.begin()+(n+1)/2,nums.end());
int i = small.size()-1;
int j = large.size()-1;
for(int k = 0;k<nums.size();k++){
    if(k%2==0){
    nums[k]=small[i--];
     } else{
    nums[k]=large[j--];
}


}

    
    }
};