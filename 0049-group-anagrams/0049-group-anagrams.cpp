class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto itr: strs){
            string word = itr;
            sort(word.begin(), word.end());
            mp[word].push_back(itr);
        }
        
        vector<vector<string>> ans;
        for(auto itr: mp){
            ans.push_back(itr.second);
        }
        return ans;  
    }
};