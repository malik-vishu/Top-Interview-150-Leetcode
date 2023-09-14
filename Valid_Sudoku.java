class Solution {
    public boolean isValidSudoku(char[][] board) {
         HashSet<String> st = new HashSet();
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
        char val = board[i][j];
    if(val!='.')
            if(!st.add(val+"found at row"+i)|| !st.add(val+"found at col"+j) || !st.add(val+"found at box"+i/3+","+j/3)){
                return false;
            }
        }
    } 
    return true;   
    }
}
