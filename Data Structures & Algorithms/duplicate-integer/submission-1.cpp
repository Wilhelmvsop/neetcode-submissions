class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash_map;
        for (int i = 0; i < nums.size(); i++) {
            if (hash_map.find(nums[i]) == hash_map.end()) {
                hash_map.insert({nums[i], 1});
            }else{
                hash_map[nums[i]] += 1;
            }
        }
        for(auto& x: hash_map){
            if(x.second != 1){
                return true;
            }
        }
        return false;
    }
};