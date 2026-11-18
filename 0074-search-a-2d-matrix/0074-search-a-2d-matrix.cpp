class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int row = 0;
        int col = cols*rows-1;



        // while(row < rows && col > -1){
        //     int cur = matrix[row][col];
        //     if(cur == target) return true;

        //     else if(cur < target) row++;

        //     else col--;
        // }
        
        while(row <= col){
              int mid = row + (col-row)/2;
            int r = mid / cols;
            int c = mid % cols;
            int cur = matrix[r][c];
            if(cur == target) return true;
            

            else if(cur < target) row = mid+1;
            else col = mid-1;
        }




        return false;


        
    }
};