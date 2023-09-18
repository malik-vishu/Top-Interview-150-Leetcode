//289.Game of Life
class Solution {
private:
    int countNghb(int r,int c,vector<vector<int>>&b){
        int R1[] = {0,0,1,1,1,-1,-1,-1};
        int C1[] = {-1,1,-1,0,1,-1,0,1};
        int cnt = 0;
        for(int i = 0;i<8;i++){
            int nR = r+R1[i];
            int nC = c+C1[i];
            if(nR>=0 && nR<b.size() && nC>=0 && nC<b[0].size() && (b[nR][nC]==1 || b[nR][nC]==3)) cnt++;
        }
        return cnt;
    }
public:
    void gameOfLife(vector<vector<int>>& board) {
        /*0 0 0
          1 0 1
          0 1 2
          1 1 3*/
        
        int rows = board.size();
        int cols = board[0].size();
        int count1s;
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                count1s = countNghb(i,j,board);
                if(board[i][j]){
                    if(count1s == 3 || count1s == 2) board[i][j] = 3;
                }
                else if(board[i][j]==0 && count1s == 3){
                    board[i][j] = 2;
                }
                cout<<board[i][j] <<" ";
            }
            cout<<endl;
        }

        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(board[i][j] == 3||board[i][j] == 2){
                    board[i][j] = 1;
                }
                else if(board[i][j] == 1){
                    board[i][j] = 0;
                }
            }
        }
    }
};
