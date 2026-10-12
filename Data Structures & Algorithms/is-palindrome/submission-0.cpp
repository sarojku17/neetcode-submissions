class Solution {
public:
    bool isValid(char c){
        if((c>='A'&& c<='Z' )||(c>='a'&& c<='z' ) || (c>='0'&& c<='9' ))
            return true;
        return false;
    }
    char transform(char c){
        if(c>='a'&& c<='z')
            return c;
        else if(c>='A'&& c<='Z')
            return c-'A'+'a';
    }
    bool isPalindrome(string s) {
        int n=s.length();
        string s1="";
        for(int i=0;i<n;i++){
            if(isValid(s[i]))
                s1+=transform(s[i]);
        }
        n=s1.length();
        cout<<s1<<endl;
        int i=0,j=n-1;
        while(i<j){
            if(s1[i]!=s1[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
