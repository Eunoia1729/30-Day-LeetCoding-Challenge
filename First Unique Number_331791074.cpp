class FirstUnique {
public:
    unordered_map<int,int> mp;
    queue<int> q;
    FirstUnique(vector<int>& nums) {
        for(auto p: nums)
        {
            mp[p]++;
        }
        for(auto p: nums)
        {
            if( mp[p] == 1)
                q.push(p);
        }
        
    }
    
    int showFirstUnique() {
        while( q.size() > 0 and mp[q.front()] > 1)
            q.pop();
        if( q.size() == 0)
            return -1;
        return (q.front());
    }
    
    void add(int value) {
        if( mp[value] == 0)
        {
            q.push(value);
        }
        mp[value]++;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
