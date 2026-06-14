class Solution {
    public boolean isAnagram(String s, String t) {
        int[] dict1 = new int[26];
        int[] dict2 = new int[26];

        for(int i=0;i<s.length();i++){
            dict1[s.charAt(i)-'a']++;
        }
        for(int i=0;i<t.length();i++){
            dict2[t.charAt(i)-'a']++;
        }
        for(int i=0;i<26;i++){
            if(dict1[i]!=dict2[i])
                return false;
        }
        return true;

    }
}
