class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>> anagram_count_map;

        for(int i=0;i<strs.size();i++){
            string curr_str = strs[i];
            sort(curr_str.begin(), curr_str.end());
            anagram_count_map[curr_str].push_back(i);
        }

        vector<vector<string>> anagram_list;

        for(auto &key:anagram_count_map){
            vector <string> anagrams;
            for(auto anagram_index:key.second){
                anagrams.push_back(strs[anagram_index]);
            }
            anagram_list.push_back(anagrams);
        }

        return anagram_list;
    }
};
