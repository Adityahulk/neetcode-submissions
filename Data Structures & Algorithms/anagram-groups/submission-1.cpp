class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> anagram_count_map;

        for(string s:strs){
            string curr_str = s;
            sort(curr_str.begin(), curr_str.end());
            anagram_count_map[curr_str].push_back(s);
        }

        vector<vector<string>> anagram_list;

        for(auto &key:anagram_count_map){
            anagram_list.push_back(key.second);
        }

        return anagram_list;
    }
};
