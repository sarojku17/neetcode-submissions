class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int ans=0;
        if(n>0)
            ans++;
        int cur=1;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                cur++;
            }else if(nums[i]-nums[i-1]>1){
                cur=1;
            }
            ans=max(ans,cur);
        }
        return ans;
    }
};
