class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<
            pair<int, pair<int,int>>,
            vector<pair<int, pair<int,int>>>,
            greater<pair<int, pair<int,int>>>
        > pq;

        for (auto &p : points) {
            int dist = p[0]*p[0] + p[1]*p[1];   
            pq.push({dist, {p[0], p[1]}});
        }

        vector<vector<int>> result;
        while (!pq.empty() && result.size() < k) {
            auto point = pq.top().second;
            pq.pop();
            result.push_back({point.first, point.second});
        }

        return result;
    }
};
