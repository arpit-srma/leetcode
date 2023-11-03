class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        int x=0;
        for(auto i:nums)
        {
            m[i]++;
        }
        for(auto itr:m)
              {
                  if(itr.second==1)
                  {
                       return itr.first;
                  }
              }
              return -1;
    }
};
   