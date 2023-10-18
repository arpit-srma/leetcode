class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string ans="";
        string first=strs[0],last=strs[n-1];
        
        for(int i=0;i<first.size();i++)
        {
            if(first[i]==last[i])
            {
                ans+=first[i];
                
            }
            else
                return ans;
        }
        return ans;
    }
};
   