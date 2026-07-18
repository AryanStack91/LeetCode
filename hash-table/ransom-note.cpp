class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for (char i : r) {
            m1[i]++;
        }

        for (char j : m) {
            m2[j]++;
        }

         for(auto& it : m1){
            if(m2[it.first] < it.second){
                return false;
            }
         }

 

            return true;
        }
    };