class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int num:nums)
        {
            hash[num]++;
        }
        vector<int> lst,oplst;
        unordered_set<int> lst2;
        for(auto p:hash){
            lst.push_back(p.second);
        }
        sort(lst.rbegin(),lst.rend());
        for(int i=0;i<=k-1;i++)
        {
            lst2.insert(lst[i]);
        }
        for(auto p:hash)
        {
            if(lst2.count(p.second))
            {
                oplst.push_back(p.first);
            }
        }
        return oplst;
    }
};
