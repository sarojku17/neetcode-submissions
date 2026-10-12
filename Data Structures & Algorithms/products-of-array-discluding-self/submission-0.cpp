class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> right(n+1);
        right[n]=1;
        for(int i=n-1;i>=0;i--){
            right[i]=nums[i]*right[i+1];
        }
        int left=1;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(left*right[i+1]);
            left*=nums[i];
        }
        return ans;
    }
};
