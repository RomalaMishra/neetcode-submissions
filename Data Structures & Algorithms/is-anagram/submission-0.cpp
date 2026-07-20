class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> hash(256,0);
        for(char c:s)
        {
            hash[c]++;
        }
        for(char c:t)
        {
            hash[c]--;
            if(hash[c]<0) return false;
        }
        return true;
    }
};
