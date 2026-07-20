class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        int n=nums.size();
        int r=0;
        while(r<n)
        {
            if(hash.find(nums[r])!=hash.end())
            {
                return true;
            }
            hash[nums[r]]=r;
            r++;
        }
        return false;
    }
};