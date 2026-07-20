class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix=1;
        int n=nums.size();
        vector<int> result(n);
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++)
        {
            hash[i]=prefix;
            prefix=prefix*nums[i];
        }
        int sufix=1;
        for(int i=n-1;i>=0;i--)
        {
            hash[i]=hash[i]*sufix;
            sufix=sufix*nums[i];
        }

        for(int i = 0; i < n; i++) {
            result[i] = hash[i];
        }
        return result;

    }
};
