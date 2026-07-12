class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int ud = 0;
        int lr = 0;
        for(int i=0; i<n; i++){
            if(moves[i] == 'U') ud+=1;
            else if(moves[i] == 'D') ud-=1;
            else if(moves[i] == 'L') lr+=1;
            else lr-=1;
        }
        return ud == 0 && lr == 0;
        
    }
};