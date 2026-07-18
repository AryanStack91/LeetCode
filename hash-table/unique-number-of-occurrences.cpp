class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>s1;
        for(int i : arr){
            mp[i]++;
        }
        for(auto &v:mp)
        {
            s1.insert(v.second);
        }
        if(mp.size() == s1.size())
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};