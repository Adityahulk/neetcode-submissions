class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        map<int, int> s_char_count;
        map<int, int> t_char_count;

        for(int index = 0; index < s.length(); index++){
            int char_s_index_value = s[index] - 'a';
            s_char_count[char_s_index_value] += 1;

            int char_t_index_value = t[index] - 'a';
            t_char_count[char_t_index_value] += 1;
        }

        for(int i=0; i<26; i++){
            if(s_char_count[i] != t_char_count[i]){
                return false;
            }
        }

        return true;
    }
};
