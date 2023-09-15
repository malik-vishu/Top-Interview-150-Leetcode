//37.Sudoku Solver
class Solution {
private:
    bool solve(vector<vector<char>>& board){
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                if(board[i][j] == '.'){
                    for(char a = '1';a<='9';a++){
                        if(valid(board,i,j,a)){
                            board[i][j] = a;
                            if(solve(board) == true){
                                return true;
                            }
                            else{
                                board[i][j] = '.';                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool valid(vector<vector<char>>&board,int i,int j,char c){
        for(int k = 0;k<9;k++){
            if(board[i][k] == c)
                return false;
            if(board[k][j] == c)
                return false;
            if(board[3*(i/3)+(k/3)][3*(j/3)+(k%3)] == c) return false;
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
