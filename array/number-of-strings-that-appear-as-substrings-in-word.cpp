class Solution {
public:
    int numOfStrings(vector<string>& s, string word) { 

        int ans = 0;

        for(int i = 0; i < s.size(); i++){

            if(word.find(s[i]) != string :: npos){
                ans++;
            }
        }
        return ans;
        
    }
};