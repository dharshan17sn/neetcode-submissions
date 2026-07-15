class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size()!=t.size()) return false;
        for(char x:s){
            mp[x]++;
        }
        for(char x:t){
            if(mp[x]==0){
                return false;
            }
            mp[x]--;
        }
        return true;
    }
};
