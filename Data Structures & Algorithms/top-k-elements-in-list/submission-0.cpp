class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int num:nums)
        {
            hash[num]++;
        }
        vector<int> lst,lst2,oplst;
        for(auto p:hash){
            lst.push_back(p.second);
        }
        sort(lst.rbegin(),lst.rend());
        for(int i=0;i<=k-1;i++)
        {
            lst2.push_back(lst[i]);
        }
        for(auto p:hash)
        {
            if(find(lst2.begin(),lst2.end(),p.second)!=lst2.end())
            {
                oplst.push_back(p.first);
            }
        }
        return oplst;
    }
};
