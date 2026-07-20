class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min=1;
        
        int max=*max_element(piles.begin(), piles.end());
        while(min<max)
        {
            int hrs=0;
            int mid = min+(max-min)/2;
            for(int x:piles)
            {
                hrs+=(x+mid-1)/mid;
            }
            if(hrs<=h)
            {
                max=mid;
            }
            else
            {
                min=mid+1;
            }
        }
        return min;
    }
};
