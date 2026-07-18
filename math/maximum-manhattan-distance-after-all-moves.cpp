class Solution {
public:
    int maxDistance(string moves) {
        int n = moves.length();
        int x2 = 0;
        int y2 = 0;
        int und = 0;

        for(int i = 0; i < n; i++){
            if(moves[i] == 'U'){
                y2++;
            }

            else if(moves[i] == 'D'){
                y2--;
            }

            else if(moves[i] == 'L'){
                x2--;
            }
            else if(moves[i] == 'R'){
                x2++;
            }
            else{
                und++;
                
            }
        }
        if(x2 < 0){
            x2 = x2 - und;
        }
        else {
            x2 = x2 + und;
        }
        int md = abs(0 - (x2)) + abs(0 - (y2));
        return md;
        
    }
};