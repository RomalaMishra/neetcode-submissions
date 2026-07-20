class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto p:matrix)
        {
            int l=0,r=p.size()-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(p[mid]==target)
                {
                    return true;
                }
                else if(p[mid]<target)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return false;
    }
};
