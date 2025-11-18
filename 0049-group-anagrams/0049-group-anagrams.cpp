class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> n;
        vector<vector<string>> res;

        for(auto s: strs){
            // vector<Type> name(size, initial_value);
            vector<int> count(26, 0);
            for(char c: s){
                count[c - 'a']++; //counting how many of each char we have
            }

            n[count].push_back(s);

        }

        for(auto val: n){
            res.push_back(val.second);
        }
        return res;
    }
};