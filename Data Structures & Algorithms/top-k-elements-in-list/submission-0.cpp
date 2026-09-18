class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        unordered_map<int, int> hash_map;
        for(auto& n: nums){
            if(hash_map.find(n) == hash_map.end()){
                hash_map.insert({n, 1});
            }else{
                hash_map[n] ++;
            }
        }
        for(auto& h: hash_map){
            pq.push({h.second, h.first});
        }
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
