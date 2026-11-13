class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        vector<int>count(10,0);
        for(int i=0;i<m;i++){
            count.assign(10,0);
            for(int j=0;j<n;j++){
                if(board[i][j]=='.')
                continue;
                int val=board[i][j]-'0';
                if(++count[val]>1)
                return false;
            }
        }

        for(int j=0;j<n;j++){
            count.assign(10,0);
            for(int i=0;i<m;i++){
                if(board[i][j]=='.')
                continue;
                int val=board[i][j]-'0';
                if(++count[val]>1)
                return false;
            }
        }

        for(int rowBlock=0;rowBlock<9;rowBlock+=3){
            for(int colBlock=0;colBlock<9;colBlock+=3){
                count.assign(10,0);
                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        if(board[rowBlock+i][colBlock+j]=='.')
                        continue;
                        int val=board[rowBlock+i][colBlock+j]-'0';
                        if(++count[val]>1)
                        return false;
                    }
                }
            }
        }
        return true;
    }
};