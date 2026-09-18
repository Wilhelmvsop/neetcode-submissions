class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hash_map1;
        unordered_map<char, int> hash_map2;
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s. size(); i ++){
            if(hash_map1.find(s[i]) == hash_map1.end()){
                hash_map1.insert({s[i], 1});
            }else{
                hash_map1[s[i]] += 1;
            }
        }
        for(int i = 0; i < t. size(); i ++){
            if(hash_map2.find(t[i]) == hash_map2.end()){
                hash_map2.insert({t[i], 1});
            }else{
                hash_map2[t[i]] += 1;
            }
        }
        return hash_map1 == hash_map2;
    }
};
