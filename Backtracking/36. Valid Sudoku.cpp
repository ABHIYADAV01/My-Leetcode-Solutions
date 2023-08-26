#include<bits/stdc++.h>
using namespace std;
class Solution {
public:


    bool isSafe(vector<vector<char>>& board,int i,int j,char no){

        for(int k=0;k<9;k++){
            if(board[i][k]==no){
                return false;
            }
             if(board[k][j]==no){
                return false;
            }
        }

        //for checking in subgrid
        int sx = (i/3)*3;
        int sy = (j/3)*3;

        for(int x=sx;x<sx+3;x++){
            for(int y=sy;y<sy+3;y++){
                if(board[x][y]==no){
                    return false;
                }
            }
        }

        return true;
    }


    bool solveSudoku(vector<vector<char>>& board,int n){

       for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] != '.'){
                    char c = board[i][j];
                     board[i][j] = '.';
                    if(isSafe(board, i, j, c) == false){
                        return false;
                    }
                    board[i][j] = c;
                }
            }
        }
        return true;

    }

    bool isValidSudoku(vector<vector<char>>& board) {

        int n = board.size();


        bool ans = solveSudoku(board,n);

        return ans;
        
        
    }
};