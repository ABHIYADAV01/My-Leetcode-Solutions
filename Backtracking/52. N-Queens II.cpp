#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool can_place(vector<vector<int>>& board,int x,int y,int n){

        for(int k=0;k<n;k++){
            if(board[k][y]==1){
                return false;
            }
        }

        int i = x;
        int j = y;

        while(i>=0 && j>=0){
            if(board[i][j]==1){
                return false;
            }
            i--;
            j--;
        }

         i = x;
         j = y;

        while(i>=0 && j<n){
            if(board[i][j]==1){
                return false;
            }
            i--;
            j++;
        }

        return true;

    }

    int solveNQueens(vector<vector<int>>& board,int n,int i){
        //base case
        if(i==n){
            return 1;
        }
        int ways=0;
        for(int j =0;j<n;j++){
        if(can_place(board,i,j,n)){
            board[i][j]=1;
            ways += solveNQueens(board,n,i+1);
            //backtrack to check if there is any other combination possible
            board[i][j]=0;
        }
        }
        return ways;

    }
    int totalNQueens(int n) {
        
      vector<vector<int>> board(n,vector<int>(n,0));
      int i=0;

      return solveNQueens(board,n,i);

     
    }
};
