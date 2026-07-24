class Solution {
public:

    static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> num_frequency;

        for(int number:nums) {
            num_frequency[number]++;
        }

        vector<pair <int,int> > freq_with_num;

        for(auto &element:num_frequency){
            freq_with_num.push_back(element);
        }

        sort(freq_with_num.begin(), freq_with_num.end(), comp);

        vector <int> freq_ans;

        for(int i=0;i<k;i++){
            freq_ans.push_back(freq_with_num[i].first);
        }

        return freq_ans;
    }
};
