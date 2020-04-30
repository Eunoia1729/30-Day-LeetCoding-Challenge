class Leaderboard {
public:
    map<int,int> scores;
    Leaderboard() {
        
    }
    
    void addScore(int playerId, int score) {
        if(scores.count(playerId) > 0)
        {
            scores[playerId] += score;    
        }
        else
            scores[playerId] = score;
    }
    
    int top(int K) {
        map<int,int> :: iterator it1;
        multiset <int> :: iterator it;
        multiset <int> st;
        for(it1 = scores.begin(); it1 != scores.end(); ++it1)
        {
            st.insert(it1->second);
            
            if( (int) st.size() > K)
            {
                it = st.begin();
                st.erase(it);
            }
        }
        int sum = 0;
        for(it = st.begin(); it != st.end(); it++)
        {
            sum+=(*it);
        }
        return sum;
    }
    
    void reset(int playerId) {
        scores[playerId] = 0;
    }
};

/**
 * Your Leaderboard object will be instantiated and called as such:
 * Leaderboard* obj = new Leaderboard();
 * obj->addScore(playerId,score);
 * int param_2 = obj->top(K);
 * obj->reset(playerId);
 */
