class Twitter {
public:
    int time=0;
    unordered_map<int, unordered_set<int>> follows;
    unordered_map<int, vector<pair<int,int>>> tweets;
    Twitter() {
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>> pq;
        for (auto p:tweets[userId])
        {
            pq.push(p);
        }
        for(int f:follows[userId])
        {
            for(auto p:tweets[f])
            {
                pq.push(p);
            }
        }
        vector<int> result;
        while(!pq.empty() && result.size()<10)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId!=followeeId)
        {
            follows[followerId].insert(followeeId);
        }
    }
    
    void unfollow(int followerId, int followeeId) {
        if(follows[followerId].count(followeeId))
        {
            follows[followerId].erase(followeeId);
        }
        
    }
};