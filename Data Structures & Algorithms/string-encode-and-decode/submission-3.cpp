class Solution {
public:
    unordered_map<int,int> hash;  // index -> length

    string encode(vector<string>& strs) {
        string s;
        for (int i = 0; i < strs.size(); i++) {
            hash[i] = strs[i].size();  // store length with order
            s += strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int pos = 0;
        for (int i = 0; i < hash.size(); i++) {
            int len = hash[i];  
            string word = s.substr(pos, len);  // substr handles len=0
            result.push_back(word);
            pos += len;
        }
        return result;
    }
};
