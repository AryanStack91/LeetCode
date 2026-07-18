class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& a) {

        sort(a.begin(), a.end());


        for(int i = 0; i < a.size(); i++){
            if(mass >= a[i]){
                mass += a[i];
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};