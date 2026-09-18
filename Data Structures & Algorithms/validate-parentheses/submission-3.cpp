class Solution {
   public:
    bool isValid(string s) {
        unordered_map<char, char> map;
        map.insert({')', '('});
        map.insert({'}', '{'});
        map.insert({']', '['});

        vector<char> stack;
        for (auto& c : s) {
            if(map.count(c)){
                if(!stack.empty() && stack.back() == map[c]){
                    stack.pop_back();
                }else{
                    return false;
                }
            }
            else{
                stack.push_back(c);
            }
        }
        if (stack.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
