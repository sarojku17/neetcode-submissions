class Solution {
public:
  void heapify(vector<pair<int,int>>& freq,int i,int l){
        int left=2*i+1;
        int right=2*i+2;
        if(left<l&&freq[i].second<freq[left].second){
            swap(freq[i],freq[left]);
            heapify(freq,left,l);
        }
        if(right<l&&freq[i].second<freq[right].second){
            swap(freq[i],freq[right]);
            heapify(freq,right,l);
        }
    }

    void buildMaxHeap(vector<pair<int,int>>& freq){
        int n= freq.size();
        for(int i=n/2+1;i>=0;i--){
            heapify(freq,i,n);
        }
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
        for(auto it :nums)
            mp[it]++;
        vector<pair<int,int>> freq;
        for(auto it:mp)
            freq.push_back(it);
        buildMaxHeap(freq);

        vector<int> ans;
        int n=freq.size();
        for(int i=0;i<k;i++){
            ans.push_back(freq[0].first);
            swap(freq[0],freq[n-1-i]);
            heapify(freq,0,n-1-i);
        }
        return ans; 
    }
};
