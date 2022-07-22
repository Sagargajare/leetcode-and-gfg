class Solution {
public:
    bool isValidRow(vector<vector<char>>& board,int row){
            set<char> rowele;
            for(int j = 0;j<9;j++){
                if(rowele.find(board[row][j]) != rowele.end()){
                    return false;
                }
                if(board[row][j] != '.'){
                    rowele.insert(board[row][j]);
                }
               
            }
        
        return true;
    }
    
    bool isValidCol(vector<vector<char>>& board,int col){
        set<char> colele;
            for(int j = 0;j<9;j++){
                
                if(colele.find(board[j][col]) != colele.end()){
                    return false;
                }
                if(board[j][col] != '.'){
                    colele.insert(board[j][col]);
                }
               
            }
        
        return true;
    }
    
    bool notInBox(vector<vector<char>> arr, int startRow, int startCol)
    {
        set<char> st;

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                char curr = arr[row + startRow][col + startCol];

                
                if (st.find(curr) != st.end())
                    return false;
                if (curr != '.')
                    st.insert(curr);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i= 0;i<9;i++){
            for(int j = 0;j<9;j++){
                 bool a = isValidRow(board, i) && isValidCol(board, j) && notInBox(board, i - i % 3, j - j % 3);
                if(!a){
                    return false;
                }
            }
        }
        
        return true;
    }
};