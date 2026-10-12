class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto it: strs){
            int n =it.length();
            ans+=(to_string(n)+"#"+it);
        }
        return ans;
    }

    vector<string> decode(string s) {
        cout<<s<<endl;
        int i=0,j=0;
        int n=s.length();
        vector<string> ans;
        while(i<n){
            j=i;
            while(j<n&&s[j]!='#')
                j++;
            int l = stoi(s.substr(i,j-i));
            cout<<i<<" "<<l<<endl;
            ans.push_back(s.substr(j+1,l));
            i=j+l+1;
        }
        return ans;
    }
};
