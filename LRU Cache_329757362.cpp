class LRUCache {
public:
    list<pair<int,int>> q;
    unordered_map<int,list<pair<int,int>>::iterator > mp;
    int cap;
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        // cout<<cap<<endl;
        if( mp.find(key) == mp.end())
            return -1;
        int val = (*mp[key]).second;
        q.erase(mp[key]);
        q.push_front(make_pair(key, val));
        mp[key] = q.begin();
        if( q.size() > cap)
        {
            int tmp_key = q.back().first;
            mp.erase(tmp_key);
            q.pop_back();
        }
        return val;
    }
    
    void put(int key, int value) {
        if( mp.find(key) != mp.end())
        {
            q.erase(mp[key]);
        }
        q.push_front(make_pair(key, value));
        mp[key] = q.begin();
        if( q.size() > cap)
        {
            int tmp_key = q.back().first;
            mp.erase(tmp_key);
            q.pop_back();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
