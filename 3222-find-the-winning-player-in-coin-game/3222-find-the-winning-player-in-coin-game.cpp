class Solution {
public:
    string winningPlayer(int x, int y) {
       int turn = min(x, y/4);
       return (turn % 2) ? "Alice" : "Bob";
        
    }
};