class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
      sort(nums.begin(),nums.end());
            
        int lastelement=nums[nums.size()-k];
        return lastelement ;
       
    }
};