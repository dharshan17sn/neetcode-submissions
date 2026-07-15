class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sorting each list;
        unordered_map<string,vector<string>> mp;
        for(auto &s1:strs){
            string s=s1;
            sort(s.begin(),s.end());
            mp[s].push_back(s1);

        }
        vector<vector<string>> result;
        for(auto &it:mp){
            result.push_back(it.second);
        }
        return result;
    }
};
